#include "skaereRunTime.hpp"
#include "../Stats.hpp"
#include "userRuntimeTesting.hpp"

namespace Skaere {


//*******************************************************************
template<class StTr>
Runtime<StTr>::Runtime(bool const flushToFile, bool const showStats, int const timeThreshold, 
                                           int const instThr,  int const simlThr ){
 userRT = new Skaere::UserRuntime<MetricsTesting,FullLog>(flushToFile, showStats, timeThreshold, instThr, simlThr );
}

//*******************************************************************
template<class StTr>
Runtime<StTr>::~Runtime() {
}

//*******************************************************************
template<class StTr>
void Runtime<StTr>::end() {
  userRT->end();
}


//*******************************************************************
template<class StTr>
bool  Runtime<StTr>::startSection  (char const*const aSectionName){
  userRT->mStats.mNumWrappedSections++;
  return userRT->startSection(aSectionName);
  return true;
}

//*******************************************************************
template<class StTr>
void  Runtime<StTr>::endSection  (char const*const aSectionName){
  userRT->mStats.mNumWrappedSectionsEnd++;
  userRT->endSection(aSectionName);
}

//*******************************************************************
template<class StTr>
void  Runtime<StTr>::tick          (){
  userRT->mStats.mNumInstrumentedSections++;
  userRT->tick();
}

//*******************************************************************
template<class StTr>
void  Runtime<StTr>::tock          (){
  userRT->tock();
}

//*******************************************************************
template<class StTr>
void  Runtime<StTr>::AddExecutedInstructions(int execInstr, int const numMemOps){
  userRT->mStats.mInstCount++;
  userRT->AddExecutedInstructions(execInstr, numMemOps);
}


//*******************************************************************
template<class StTr>
void  Runtime<StTr>::insideMPI(){
  userRT->mStats.mNumMpiCalls++;
  userRT->insideMPI();
}

//*******************************************************************
template<class StTr>
void  Runtime<StTr>::outsideMPI(){
  userRT->outsideMPI();
}

//*******************************************************************
template<class StTr>
void  Runtime<StTr>::outputSectionsAsDot(){
  userRT->outputSectionsAsDot();
}

} //end namespace Skaere

template class Skaere::Runtime<Skaere::StackTrace>;
