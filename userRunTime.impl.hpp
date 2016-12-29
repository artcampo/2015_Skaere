#include "userRunTime.hpp"
#include "skaereRunTime.hpp"
#include "runtime/skaere.h"
#include <memory>
#include <stdlib.h> //getenv
#include "fail/fail.hpp"
#include "Timing.hpp"
#include "SectionsTraceToDot.hpp"
#include "Metrics.hpp"
#include "runtime_Testing/MetricsTesting.hpp"
#include "runtime_PAPI/MetricsPapi.hpp"

#include "extrae_user_events.h"   // Extrae API
#include "mpitrace_user_events.h"

#define SKAERE_PAPI

//#define SKAERE_NO_EXTRAE
//#define SKAERE_ENABLE_CHECKS
//#define SKAERE_NO_DOT_OUTPUT

namespace Skaere {
//*******************************************************************
static std::string const logDelimiter(":");
char const*const  main_string = "Main";



//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
UserRuntime<Metric,LogPolicy>::UserRuntime(bool const flushToFile, bool const showStats, int const timeThreshold, 
                                           int const instThr,  int const simlThr  )
  : mSections(1)
  , mShowStats{showStats}
  , mFreeExtraeId(0)
  , mFreeUniqueId(0)
  , mTimeThreshold(timeThreshold*0.000000001f)
  , mMetricsBetweenEmittedSections()
  , mStep(0)
  , mNumGraphs(0)
  //, mBuffer{flushToFile}
  , mNumOpenSections(0)
  //, mExitCount(0)
  {
//     char const*const defaultFile  = "skaere_llvm.log";
//     char const*const envFile      = getenv ("SKAERE_LOG_FILE");

//     if (envFile == 0 ) mBuffer.setOutputFile(defaultFile);
//     else               mBuffer.setOutputFile(envFile);
  //OMPI_COMM_WORLD_RANK ->
  
  getMpiRank();
  

  Metric::set_instThr(1000000);
  Metric::set_simlThr(0.6f );
//   std::cout << "SKAERE :: thrds " << simlThr << ": " << float( float(simlThr)/1000.0f)<< " :"<<Metric::simlThr() << std::endl;
  
  LogPolicy<Metric>::init( Metric::numInstThreshold(), 
                           Metric::metricDiffThreshold(), 
                           Metric::minInstance(), 
                           Metric::instThr(),
                           Metric::simlThr(),
                           logName().c_str()
                         );    
    
  
  
#ifndef SKAERE_NO_EXTRAE
  //Extrae_init();
  //MPItrace_init();
  //MPItrace_set_options(EXTRAE_HWC_OPTION);
#endif

  getSectionExtraeId(mSkaere_unused);
  getSectionExtraeId(mSkaere_none);
  newId(mSkaere_unused);
  newId(mSkaere_none);
  newId(main_string);

#ifndef SKAERE_NO_EXTRAE
  mExtraeSkaereCountersType[0] = mExtraeSkaereEvent;
  mExtraeSkaereCountersType[1] = mExtraeSkaereEventNumInst;
  mExtraeSkaereCountersType[2] = mExtraeSkaereEventNumMem;
  #ifdef SKAERE_PAPI
    mExtraeSkaereCountersType[1] = mExtraeSkaereEventNumPapiCycl; // PAPI_TOT_CYC [Total cycles]
    mExtraeSkaereCountersType[2] = mExtraeSkaereEventNumPapiInst; // PAPI_TOT_INS [Instr completed]  
  #endif
  mExtraeSkaereCountersVal[0]   = getSectionExtraeId(mSections.getSection().id);
  mExtraeSkaereCountersVal[1]   = 0;
  mExtraeSkaereCountersVal[2]   = 0;
  
//   MPItrace_nevent (3, &mExtraeSkaereCountersType[0], &mExtraeSkaereCountersVal[0]);
  
#endif

  initMetrics();
  

  mStatsfile = new std::ofstream();
  mStatsfile->open ("skaere_stats.txt");
  *mStatsfile << "Skaere:: stats of execution";
  #ifdef SKAERE_PAPI
    *mStatsfile << " [PAPI]";
  #endif
  *mStatsfile << "\n";

}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
UserRuntime<Metric,LogPolicy>::~UserRuntime() {
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void UserRuntime<Metric,LogPolicy>::end() {
#ifndef SKAERE_NO_EXTRAE
  extraeRecordEventNames();
#endif

  LogPolicy<Metric>::dump(mSections,mStep);
  LogPolicy<Metric>::end();

  if((!mHasMpiRank) or (mHasMpiRank and mMpiRank==0)){
#ifndef SKAERE_NO_DOT_OUTPUT
    std::cout << "Skare :: dot\n";
    outputSectionsAsDot();
#endif
  }

  if (mShowStats)
    *mStatsfile << mStats;
  mStatsfile->close();
  delete mStatsfile;

//   Extrae_fini();
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
unsigned int UserRuntime<Metric,LogPolicy>::newIdentifier() {
  return mId++; }

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void UserRuntime<Metric,LogPolicy>::newSectionToInstrument(char const*const aSectionName){
  mSections.createChild( {aSectionName, true, newId(aSectionName)} );
  //Set leaf flags
  mSections.applyToParents( mSections.getSectionNode(),
    [this](typename SectionsTrace<Metric>::Node* n, typename SectionsTrace<Metric>::Node* child) {
        n->mSection.is_instrumented = false;
        return false;  //applied to all parents
    });
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void UserRuntime<Metric,LogPolicy>::newSectionNotToInstrument(char const*const aSectionName){
  mSections.createChild( {aSectionName, false, newId(aSectionName)} );
  //Set leaf flag
  if( mSections.getParentSection().isInstrumented() )
    mSections.getSection().is_leaf = true;
  //mark as dead
  mSections.getSection().isDead = true;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool  UserRuntime<Metric,LogPolicy>::startSection  (char const*const aSectionName){

  //Change section or create it
  if( !mSections.exists(aSectionName ) ){
    if(mSections.getSection().section_opened or parentIsOpen(mSections.getSectionNode()) or parentIsInstrumented(mSections.getSectionNode()) )
      newSectionNotToInstrument(aSectionName);
    else
      newSectionToInstrument(aSectionName);
  }else{
    mSections.setIteratorToChild(aSectionName);
    mSections.getSection().instances++;
  }

  LogPolicy<Metric>::startSection(mSections, mStep, aSectionName);


  return mSections.getSection().isInstrumented() or mSections.sectionHasInstrumentedCalls();
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::endSection  (char const*const aSectionName){
  //  Pop stack
  mSections.setIteratorToParent();
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::tick          (){

  if( mSections.getSection().isInstrumented() or mSections.sectionHasInstrumentedCalls()){
    //  Read counters

    //Acummulate metrics before changing section
    const Metric metricsBetweenticks = readMetrics();
    updateMetrics(metricsBetweenticks);
    mMetricsBetweenEmittedSections = mMetricsBetweenEmittedSections + metricsBetweenticks;

    LogPolicy<Metric>::tick(mSections, mStep, mMetricsBetweenEmittedSections);


    //SkaereTiming::tick(mSections.getSection().currentTime);

    // update stats
    mStats.mNumTicks++;
    mSections.getSection().tick_was_produced = true;
    mSections.getSection().instancesInstrumented++;

    LogPolicy<Metric>::tick2(mSections, mStep);
    //ALEX COMENTA AL AZAR
    //    mSections.checkCoherence(mStep, *mLogfile);
    //mSections.dump(mStep, *mLogfile);

    //  Emit section only if it's instrumented
    if(     mSections.getSection().isInstrumented()
        and hasEnoughInfo (mSections.getSection())
        and !parentIsOpen (mSections.getSectionNode())
        and canBeEmitted  (mSections.getSection()) ){
        if(!mSections.getSection().hasExtraeId){
          mSections.getSection().extraeId     = getSectionExtraeId(mSections.getSection().id);
          mSections.getSection().hasExtraeId  = true;
          // ART: DIRTY: only for dot
          mSections.getSection().wasEmitted   = true;
            mSections.applyToParents( mSections.getSectionNode(),
          [this](typename SectionsTrace<Metric>::Node* n, typename SectionsTrace<Metric>::Node* child) {
              n->mSection.wasEmitted = true;
              return false;
          });
          // ART: DIRTY: only for dot - end
          mStats.mNumSections++;
        }        
#ifndef SKAERE_NO_EXTRAE
        //emit metrics in course which correspond to the non-
        mExtraeSkaereCountersVal[0] = getSectionExtraeId(mSections.getSection().id);
        mExtraeSkaereCountersVal[1] = mMetricsBetweenEmittedSections.mT();
        mExtraeSkaereCountersVal[2] = mMetricsBetweenEmittedSections.mR();
        
        MPItrace_nevent (3, &mExtraeSkaereCountersType[0], &mExtraeSkaereCountersVal[0]);
#endif

        mStats.mNumSectionEvents++;
        mNumOpenSections++;
        mOpenSections.push_back(mSections.getSection().id);
        mSections.getSection().section_opened = true;
        
        LogPolicy<Metric>::openSection(mSections, mStep, mMetricsBetweenEmittedSections);

        //TODO:CHECK
#ifdef SKAERE_ENABLE_CHECKS        
        if( mNumOpenSections > 1 ){          
          LogPolicy<Metric>::errorOpenSections(mOpenSections, mStep);
          std::cout << "Skaere :: OpenSec" << std::endl;  
          exit(1042);
        }
#endif

    } // end if Emit section only if it's instrumented

  }else{
    mSections.getSection().instancesNotInstrumented++;
  }

}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::tock          (){
  mStep++;
  if( mSections.getSection().tick_was_produced){
    mStats.mNumTocks++;
    mSections.getSection().tick_was_produced = false;
    //double seconds = SkaereTiming::tock(mSections.getSection().currentTime);
    //mSections.getSection().seconds = seconds;
    const Metric metrics = readMetrics();
    addMeasure(metrics);
    mMetricsBetweenEmittedSections = mMetricsBetweenEmittedSections + metrics;


    //update logic
    //update current node

    typename SectionsTrace<Metric>::Node* node  = mSections.getSectionNode();
    bool changed                                = updateSection(node);
    
#ifdef SKAERE_ENABLE_CHECKS      
    if(changed) checkStateIntegrity();
#endif
    if(changed) mStats.mChangeAtNode++;

    //  output if section was open
    if( mSections.getSection().section_opened ){

        LogPolicy<Metric>::closeSection(mSections, mStep);

//       if(mSections.getSection().section_opened and hasEnoughInfo(mSections.getSection())){
//         *mLogfile << "Skaere " << mStep << " :: CLOSE :: " << mSections.getSection().id << "\n";
//       }

      // emit
      if(mSections.getSection().section_opened){
        #ifndef SKAERE_NO_EXTRAE
          mExtraeSkaereCountersVal[0] = getSectionExtraeId(mSkaere_none);
          mExtraeSkaereCountersVal[1] = mSections.getSection().lastMeasure().mT();
          mExtraeSkaereCountersVal[2] = mSections.getSection().lastMeasure().mR();
          
          MPItrace_nevent (3, &mExtraeSkaereCountersType[0], &mExtraeSkaereCountersVal[0]);       
        #endif
        mMetricsBetweenEmittedSections = Metric();
        mNumOpenSections--;

#ifdef SKAERE_ENABLE_CHECKS  
        //TODO:CHECK
        if( mNumOpenSections < 0 ){
          LogPolicy<Metric>::errorUnopenedSections(mStep);
          std::cout << "Skaere :: UnOpenSec" << std::endl;  
          exit(1043);
        }
#endif
        mSections.getSection().section_opened = false;

#ifdef SKAERE_ENABLE_CHECKS          
        char const* idlast = mOpenSections.back();
        if(idlast != mSections.getSection().id){          
          LogPolicy<Metric>::errorWrongSections(mStep);
          std::cout << "Skaere :: wrongSec" << std::endl;  
          exit(1044);
        }
#endif

        mOpenSections.pop_back();
      }//end  if(mSections.getSection().section_opened){

    }//end if( mSections.getSection().isInstrumented() )

  }// end if( mSections.getSection().tick_was_produced){

  //mSections.dump(mStep, *mLogfile);
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
int  UserRuntime<Metric,LogPolicy>::getSectionExtraeId(char const*const aName){
  auto it = mIdsOfSections.find(aName);
  if(it==mIdsOfSections.end()){
    int id                = computeId(mFreeExtraeId);
    //std::cout << "proc: " << mMpiRank<<" gets: " <<mFreeExtraeId <<", "<<id<<std::endl;
    mIdsOfSections[aName] = id;
    mSectionsOfId[id]     = aName;
    mFreeExtraeId++;
    return id;
  }
  return it->second;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
int UserRuntime<Metric,LogPolicy>::newId(char const*const aName){
  int id                = mFreeUniqueId;
  mFreeUniqueId++;
  return id;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::extraeRecordEventNames(){
#ifndef SKAERE_NO_EXTRAE
  unsigned int nvalues      = mFreeExtraeId;
  extrae_type_t type        = mExtraeSkaereEvent;
  std::vector<char const*>      description_values;
  std::vector<extrae_value_t>   values(mFreeExtraeId);

  std::vector<std::string> str_description_values;
  //for( int i = 0; i < mFreeExtraeId ; ++i){
  int i = 0;
  for( auto const &section : mSectionsOfId){
    values[i] = getSectionExtraeId(section.second);
    ++i;
    std::string s1;
    if(mHasMpiRank)
      s1 = std::to_string(mMpiRank) + " mpi " + simplifyName(section.second);
    else
      s1 = simplifyName(section.second);
    //std::cout << i <<": " << s1 << "\n";
    str_description_values.push_back(s1);
    description_values.push_back( str_description_values.back().c_str() );
  }

  LogPolicy<Metric>::skaereRecords(mFreeExtraeId, values, str_description_values);

  char const * skaere_event = "Skaere Event";


  Extrae_define_event_type (&type,
                            (char*)skaere_event,
                            &nvalues,
                            (extrae_value_t*)&values[0],
                            (char**)&description_values[0]);

  {
    char const * skaere_event_numInst = "Skaere numInst";
    char const * skaere_event_numMem  = "Skaere numMem";
    char const * skaere_event_cycl    = "PAPI_TOT_CYC";
    char const * skaere_event_inst    = "PAPI_TOT_INS";

    extrae_type_t type_numInst        = mExtraeSkaereEventNumInst;
    extrae_type_t type_numMem         = mExtraeSkaereEventNumMem;
    extrae_type_t type_numPapiCycl    = mExtraeSkaereEventNumPapiCycl;
    extrae_type_t type_numPapiInst    = mExtraeSkaereEventNumPapiInst;

    int* ptrnull = NULL;
    char const* charptrnull = NULL;
    unsigned int   zeroint = 0;

    Extrae_define_event_type (&type_numInst,
                              (char*)skaere_event_numInst,
                              &zeroint,
                              (extrae_value_t*)&ptrnull,
                              (char**)&charptrnull);

    Extrae_define_event_type (&type_numMem,
                              (char*)skaere_event_numMem,
                              &zeroint,
                              (extrae_value_t*)&ptrnull,
                              (char**)&charptrnull);
    
//     Extrae_define_event_type (&type_numPapiCycl,
//                               (char*)skaere_event_cycl,
//                               &zeroint,
//                               (extrae_value_t*)&ptrnull,
//                               (char**)&charptrnull);    
    
//     Extrae_define_event_type (&type_numPapiInst,
//                               (char*)skaere_event_inst,
//                               &zeroint,
//                               (extrae_value_t*)&ptrnull,
//                               (char**)&charptrnull);        

  }
#endif

}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::openParentIfAllChildrenAreClosed(typename SectionsTrace<Metric>::Node* n){
  bool changed = false;
  bool allDead = true;
  for ( auto& child : n->mChildren ){
    if(!child->mSection.isDead)
      allDead = false;
  }
  if(allDead){
    n->mSection.is_instrumented = true;
    changed                     = true;
  }
  return changed;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::haveSiblingsEnoughInfo(typename SectionsTrace<Metric>::Node* n){
  if(n->mParent == nullptr) return false;
  typename SectionsTrace<Metric>::Node* p = n->mParent;
  bool allHaveEnoughInfo = true;
  for ( auto& child : p->mChildren ){
    if(!hasEnoughInfo(child->mSection))
      allHaveEnoughInfo = false;
  }
  return allHaveEnoughInfo;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::noSiblingsIsOnHold(typename SectionsTrace<Metric>::Node* n){
  if(n->mParent == nullptr) return false;
  typename SectionsTrace<Metric>::Node* p = n->mParent;
  bool oneInHold = false;
  for ( auto& child : p->mChildren ){
    if(child->mSection.isInHold())
      oneInHold = true;
  }
  return not oneInHold;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::areAllSiblingsSimilar(typename SectionsTrace<Metric>::Node* n){
  double min = n->mSection.averageMetrics();
  double max = n->mSection.averageMetrics();
  typename SectionsTrace<Metric>::Node* p = n->mParent;
  for ( auto& child : p->mChildren ){
    if(not child->mSection.isDead){
      if(child->mSection.averageMetrics() > max) max = child->mSection.averageMetrics();
      if(child->mSection.averageMetrics() < min) min = child->mSection.averageMetrics();
    }
  }
  /*
  if(n->mSection.uniqueId == 38){
    std::cout << "Similarity=> "
              << "max: " << max
              << "min: " << min
              << "(max-min)/max: " << (max-min)/max
              << "metricDiffThreshold(): " << metricDiffThreshold()
              << "comparison: " << (((max-min)/max) < double(metricDiffThreshold()))
              << "\n";
  }
  */
  return ((max-min)/max) < double(Metric::metricDiffThreshold());
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::openParentAndCloseItsChildren(typename SectionsTrace<Metric>::Node* n){
  bool changed = true;
  typename SectionsTrace<Metric>::Node* p = n->mParent;
  for ( auto& child : p->mChildren ){
    child->mSection.is_instrumented = false;
    child->mSection.isDead          = true;
  }

  p->mSection.is_instrumented = true;
  return changed;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::updateSection(typename SectionsTrace<Metric>::Node* n){
  bool changed = false;

  //*mLogfile << "Skaere :: udpate\n";
  if(not hasEnoughInfo(n->mSection))
    return false;

  if(not n->mSection.isInstrumented())
    return false;
  


  // Close by instruction threshold
  if( n->mSection.accumMetricT() < this->Metric::numInstThreshold()){
    n->mSection.is_instrumented = false;
    n->mSection.isDead          = true;
    
    if(n->mParent != nullptr and n->mParent->mSection.hasMpiCalls)
      return false;
    if(n->mParent != nullptr){
      changed = openParentIfAllChildrenAreClosed(n->mParent);
    }
    return changed;
  }
  
  if(n->mParent != nullptr and n->mParent->mSection.hasMpiCalls)
    return false;

  // Close by similarity threshold
  if(haveSiblingsEnoughInfo(n))
    if(noSiblingsIsOnHold(n))
      if(areAllSiblingsSimilar(n)){
            changed = openParentAndCloseItsChildren(n);
        }

  return changed;
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::allChildrenNonInst(typename SectionsTrace<Metric>::Node* n){
  bool allNonInst = true;
  mSections.applyToChildren( n,
    [&allNonInst](typename SectionsTrace<Metric>::Node* n) {
        if(n->mSection.isInstrumented()) allNonInst = false;
        return false;
    });
  return allNonInst;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::allChildrenAreDead(typename SectionsTrace<Metric>::Node* n) const{
  bool allDead = true;
  mSections.applyToChildren( n,
    [&allDead](typename SectionsTrace<Metric>::Node* n) {
        if(!n->mSection.isDead) allDead = false;
        return false;
    });
  return allDead;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::allParentAreInHold(typename SectionsTrace<Metric>::Node* n) const{
  bool allInHold = true;
  mSections.applyToParents( n,
    [&allInHold,this](typename SectionsTrace<Metric>::Node* n, typename SectionsTrace<Metric>::Node* child) {
        if(!n->mSection.isInHold()){
          allInHold = false;
          /*
          *mLogfile << "Skaere :: parent not in hold:"
                      << n->mSection.uniqueId << "\n";
                      */
        }
        return false;
    });
  return allInHold;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::parentIsOpen(typename SectionsTrace<Metric>::Node* n){
  bool parentOpen = false;

  mSections.applyToParents( n,
    [this, &parentOpen](typename SectionsTrace<Metric>::Node* n, typename SectionsTrace<Metric>::Node* c) {
        if(n->mSection.section_opened) parentOpen = true;
        return false;
    });
  return parentOpen;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool UserRuntime<Metric,LogPolicy>::parentIsInstrumented(typename SectionsTrace<Metric>::Node* n){
  bool parentInstrumented = false;

  mSections.applyToParents( n,
    [this, &parentInstrumented](typename SectionsTrace<Metric>::Node* n, typename SectionsTrace<Metric>::Node* c) {
//*mLogfile << "Skaere :: check parent instrumented :" << n->mSection.id << "\n";
        if(n->mSection.isInstrumented()) parentInstrumented = true;
        return false;
    });
  return parentInstrumented;
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::checkSectionsSizes(){
  bool parentHasMoreInstructionsThanChild = true;

  mSections.applyToChildren( mSections.getSectionNode(),
    [this, &parentHasMoreInstructionsThanChild](typename SectionsTrace<Metric>::Node* n) {
        size_t totalAcc     = 0.0f;
        for ( auto& child : n->mChildren )
          totalAcc += (child->mSection.accMeasure().mT());

        if(totalAcc > 0 and (n->mSection.accMeasure().mT()) < totalAcc){
          parentHasMoreInstructionsThanChild = false;
          LogPolicy<Metric>::errorChildrenBiggerThanParent(mSections, n, mStep, totalAcc);

        }
        return false;
    });

  if(!parentHasMoreInstructionsThanChild) {
    std::cout << "Skaere :: child" << std::endl;  
    exit(1049);
  }

  //return parentHasMoreInstructionsThanChild;
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::checkStateIntegrity(){
  bool good = true;

  mSections.applyToChildren( mSections.getMainSectionNode(),
    [this, &good](typename SectionsTrace<Metric>::Node* n) {
        if(n->mSection.isInstrumented()){
          good &= (allChildrenAreDead(n) and allParentAreInHold(n));
          if(!(allChildrenAreDead(n) and allParentAreInHold(n)))
            LogPolicy<Metric>::errorIntegrity(n, allChildrenAreDead(n), allParentAreInHold(n));
        }
        return false;
    });

  if(!good){
    LogPolicy<Metric>::dump(mSections, mStep);
    exit(1050);
  }

  //return parentHasMoreInstructionsThanChild;
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::addMeasure          (const Metric& aMetrics){
  mSections.getSection().addMeasure(aMetrics);
  updateMetrics(aMetrics);
#ifdef SKAERE_ENABLE_CHECKS  
  checkSectionsSizes();
#endif
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::updateMetrics(const Metric& aMetrics){
#ifdef SKAERE_ENABLE_CHECKS    
  checkMetrics(aMetrics);
#endif
  bool show = isSubsetOfInterest(mSections.getSection());

  if(aMetrics.mT() != 0)
    mSections.applyToParents( mSections.getSectionNode(),
      [this, show, aMetrics](typename SectionsTrace<Metric>::Node* n, typename SectionsTrace<Metric>::Node* child) {
          n->mSection.updateMeasure(aMetrics);
          return false;  //applied to all parents
      });

}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::outputSectionsAsDot(){
  std::string s0("callGraph_" + std::to_string(mNumGraphs) + ".dot");
  std::string s1("callGraph_" + std::to_string(mNumGraphs) + "_thr" + ".dot");
  std::string s2("callGraph_" + std::to_string(mNumGraphs) + "_inst" + ".dot");
  std::string s3("callGraph_" + std::to_string(mNumGraphs) + "_inst_thr" + ".dot");
  std::string se("callGraph_" + std::to_string(mNumGraphs) + "_emitted" + ".dot");

  sectionsTraceToDot<Metric>(mSections, s0, Metric::numInstThreshold(), NodeCheckAll<Metric>);
  sectionsTraceToDot<Metric>(mSections, se, Metric::numInstThreshold(), NodeCheckEmitted<Metric>);
  sectionsTraceToDot<Metric>(mSections, s2, Metric::numInstThreshold(), NodeCheckInstr<Metric>);
//   sectionsTraceToDot<Metric>(mSections, s3, Metric::numInstThreshold(), NodeCheckInstrAndThreshold<Metric>);
  mNumGraphs++;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool  UserRuntime<Metric,LogPolicy>::isSubsetOfInterest(const Section<Metric>& aSection) const{
  return aSection.uniqueId == 3;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void UserRuntime<Metric,LogPolicy>::getMpiRank(){
  int rank      =  0;
  bool hasRank  = false;
  char const*const mpiRank_OMPI       = getenv ("OMPI_COMM_WORLD_RANK");
  char const*const mpiRank_Intel_MPI  = getenv ("PMI_RANK");
  char const*const mpiRank_Myrinet_MX = getenv ("MXMPI_ID");
  
  if(mpiRank_OMPI != 0){
    hasRank = true;
    rank = atoi(mpiRank_OMPI);
  }else if(mpiRank_Intel_MPI != 0){
    hasRank = true;
    rank = atoi(mpiRank_Intel_MPI);
  }else if(mpiRank_Myrinet_MX != 0){
    hasRank = true;
    rank = atoi(mpiRank_Myrinet_MX);
  }
  mHasMpiRank = hasRank;
  mMpiRank = rank;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
std::string UserRuntime<Metric,LogPolicy>::logName() const{
  std::string logName = "skaere_log";
  if(mHasMpiRank)
    logName += std::to_string(mMpiRank);
  logName += std::string(".txt");
  std::cout << "Skaere :: writing to " << logName << "\n";  
  return logName;
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::checkMetrics(const Metric& aMetrics){
  /*
  if( aMetrics.mT() < aMetrics.mR()){
    LogPolicy<Metric>::errorNumInstAboveNumMem();
    std::cout << "Skaere :: metrics error " << std::endl;  
    exit(1050);

  }
  */
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool  UserRuntime<Metric,LogPolicy>::canBeEmitted(const Section<Metric>& aSection){
  return true;
  return aSection.lastMeasureT() > Metric::numInstThreshold();
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
bool  UserRuntime<Metric,LogPolicy>::hasEnoughInfo (const Section<Metric>& section){
  return section.samples > Metric::minInstance();
}

//*******************************************************************
// a read always resets internal value of metrics
// Needs to be specialized
template<typename Metric, template<typename> class LogPolicy>
void UserRuntime<Metric,LogPolicy>::initMetrics(){
  std::cout << "Not impl: 1"<<std::endl; exit(1);
}

//*******************************************************************
// a read always resets internal value of metrics
// Needs to be specialized
template<typename Metric, template<typename> class LogPolicy>
const Metric UserRuntime<Metric,LogPolicy>::readMetrics(){
  Metric m;
  std::cout << "Not impl: 2"<<std::endl; exit(1);
  return m;
}

//*******************************************************************
// Needs to be specialized
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::AddExecutedInstructions(int execInstr, int const numMemOps){
  std::cout << "Not impl: 3"<<std::endl; exit(1);
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::insideMPI(){
  LogPolicy<Metric>::insideMPI(mStep,  mSections.getSection().id);
  mSections.getSection().hasMpiCalls = true;
  
//   mMpiCallId = mSections.getSection().id;
//   tock();
//   endSection(mMpiCallId);
}

//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
void  UserRuntime<Metric,LogPolicy>::outsideMPI(){
//   startSection(mMpiCallId);
//   tick();
}


//*******************************************************************
template<typename Metric, template<typename> class LogPolicy>
int  UserRuntime<Metric,LogPolicy>::computeId(int const i) const{
  int id;
  if(!mHasMpiRank)
      id = i;
    else
      id = (i + 1) + (mMpiRank + 1)*100000;
  return id;
}

} //end namespace Skaere
