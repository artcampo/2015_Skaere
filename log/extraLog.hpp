#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include "../SectionsTrace.hpp"
//#include "../Metric.hpp"
#include "extrae_user_events.h"   // Extrae API

// debugging log

namespace Skaere { 
  
template<class Metric>
struct ExtraLog{
  std::ofstream*        mLogfile;
  
//*******************************************************************
void init( const int numInstThreshold
         , const float metricDiffThreshold
         , const int minInstance
         , const int instThr
         , const float simlThr
         , char const*const logName)
  {  
  mLogfile = new std::ofstream();
  mLogfile->open ("skaere_log.txt");
  *mLogfile << "Skaere:: init" << "\n";  

  *mLogfile << "Skaere constants: " 
       << numInstThreshold    <<", "
       << metricDiffThreshold <<", "
       << minInstance         <<", "
       << instThr             <<", "
       << simlThr             <<" "
       << std::endl;
}

//*******************************************************************
void dump(const SectionsTrace<Metric>& aSections,const int aStep){
 aSections.dump(aStep, *mLogfile); 
}
//*******************************************************************
void end(){
  mLogfile->close();
  delete mLogfile;
}

//*******************************************************************
void startSection(const SectionsTrace<Metric>& aSections,const int aStep, char const*const aSectionName){
  *mLogfile <<"\n"<< "SKAERE " << aStep << " :: start: "
    << aSections.getSection().isInstrumented() << ", "
    << aSections.sectionHasInstrumentedCalls()
    << " -> " << aSectionName
    <<"\n";  
}

//*******************************************************************
void closeSection(const SectionsTrace<Metric>& aSections,const int aStep){
  *mLogfile << "Skaere "      << aStep 
            << " :: CLOSE :: "<< aSections.getSection().uniqueId 
            << " => Metrics " << aSections.getSection().lastMeasure()
            << "\n";        
}

//*******************************************************************
void tick(const SectionsTrace<Metric>& aSections,const int aStep, Metric aMetricsBetweenEmittedSections){
  //bool show = isSubsetOfInterest(aSections.getParentSection());
  //if(show) 
  *mLogfile << "Skaere " << aStep << " :: metrics in between : "<<aSections.getParentSection().id<< ": " << aMetricsBetweenEmittedSections <<  "\n";    
}

//*******************************************************************
void tick2(const SectionsTrace<Metric>& aSections,const int aStep){
  *mLogfile <<"\n"<< "SKAERE " << aStep << " :: tick: "<< aSections.getSection().isInstrumented()
        << " -> " << aSections.getSection().id
        <<"\n";  
}

//*******************************************************************
void openSection(const SectionsTrace<Metric>& aSections,const int aStep, Metric aMetricsBetweenEmittedSections){
  *mLogfile << "Skaere "      << aStep 
            << " :: OPEN :: " << aSections.getSection().uniqueId
            << " => Metrics " << aMetricsBetweenEmittedSections
            << "\n";  
}

//*******************************************************************
void tock(const SectionsTrace<Metric>& aSections,const int aStep){
  if(isSubsetOfInterest(aSections.getSection()))
    *mLogfile << "*****Skaere " << aStep << " :: update node "<< "\n";  
}



//*******************************************************************
void skaereRecords(const int aFreeExtraeId,  const std::vector<extrae_value_t>& aValues, const std::vector<std::string>& aStr_description_values){
  *mLogfile << "Skaere: ++++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
  *mLogfile << "Skaere: writing "<< aFreeExtraeId << " extrae records" << "\n";

  for( int i = 0; i < aFreeExtraeId ; ++i){
    *mLogfile << "Id: " << aValues[i] <<"Section: " << aStr_description_values[i].c_str()<< "\n";
  }
  *mLogfile << "Skaere: ++++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
}


//*******************************************************************
void errorOpenSections(std::vector<char const*>& aOpenSections, const int aStep){
  *mLogfile << "Skaere " << aStep << " :: ERROR :: more than section open" << "\n";          
  *mLogfile << "Open sections: "<< "\n";
  for( auto id : aOpenSections )
    *mLogfile << id << "\n";
  *mLogfile << std::endl;  
}

//*******************************************************************
void errorNumInstAboveNumMem(){
  *mLogfile <<"SKAERE :: error :: numIsnt > numMem." << std::endl;
}

//*******************************************************************
void errorUnopenedSections(const int aStep){
  *mLogfile << "Skaere " << aStep << " :: ERROR :: closing unopened sections" << "\n";
}

//*******************************************************************
void errorWrongSections(const int aStep){
  *mLogfile << "Skaere " << aStep << " :: ERROR :: closing wrong sections" << "\n";
}

//*******************************************************************
void errorChildrenBiggerThanParent(SectionsTrace<Metric>& aSections,
                                  typename SectionsTrace<Metric>::Node* n,
                                  const int aStep,
                                  const size_t aTotalAcc){
  *mLogfile << "Skaere " << aStep << " :: ERROR :: a node has less inst than its children:"
                      << n->mSection.id
                      << "<"         << n->mSection.uniqueId      << ">"<<std::endl;
  *mLogfile << "TOTAL:   Node: " << n->mSection.accMeasure().mT() << " children: "<< aTotalAcc<< std::endl;
  *mLogfile << "Ratio: " << double(n->mSection.accMeasure().mT())/aTotalAcc<< std::endl;
  aSections.dump(aStep, *mLogfile);
  *mLogfile << "Node\n" << n->mSection << std::endl;
  *mLogfile << "Children\n";
  for ( auto& child : n->mChildren )
    *mLogfile << " -> " << child->mSection << std::endl;
  *mLogfile << std::endl;
}

//*******************************************************************
void errorIntegrity(typename SectionsTrace<Metric>::Node* n, bool bool_allChildrenAreDead, bool bool_allParentAreInHold){
  *mLogfile << "Skaere :: integrity error :"
            << n->mSection.uniqueId;
  if(!bool_allChildrenAreDead)
    *mLogfile <<" Children not dead\n";
  if(!bool_allParentAreInHold)
    *mLogfile <<" Not all parents in hold\n";
}

//*******************************************************************
void insideMPI(const int aStep, char const*const aSectionName){
  *mLogfile << "Skaere " << aStep << " :: inside MPI issued on: " << aSectionName<< "\n";
}

};

//*******************************************************************
// end of namespace

}