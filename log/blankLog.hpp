#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include "../SectionsTrace.hpp"
//#include "../Metrics.hpp"
#include "extrae_user_events.h"   // Extrae API

// real execution log

namespace Skaere {

template<class Metric>
struct BlankLog{
  std::ofstream*        mLogfile; //Only dump stacktrace at end (1)

//*******************************************************************
void init( const int numInstThreshold
         , const float metricDiffThreshold
         , const int minInstance
         , const int instThr
         , const float simlThr
         , char const*const logName)
  {
//     /*
  mLogfile = new std::ofstream(); //Only dump stacktrace at end (1)
  mLogfile->open(logName);
  *mLogfile << "Skaere:: init" << "\n";

  *mLogfile << "Skaere constants: "
       << numInstThreshold    <<", "
       << metricDiffThreshold <<", "
       << minInstance         <<", "
       << instThr             <<", "
       << simlThr             <<" "
       << std::endl;
//        */
}

//*******************************************************************
void dump(const SectionsTrace<Metric>& aSections,const int aStep){
  aSections.dump(aStep, *mLogfile); //Only dump stacktrace at end (1)
}

//*******************************************************************
void end(){}

//*******************************************************************
void startSection(const SectionsTrace<Metric>& aSections,const int aStep, char const*const aSectionName){ }

//*******************************************************************
void tick(const SectionsTrace<Metric>& aSections,const int aStep, Metric aMetricsBetweenEmittedSections){}

//*******************************************************************
void tick2(const SectionsTrace<Metric>& aSections,const int aStep){}

//*******************************************************************
void openSection(const SectionsTrace<Metric>& aSections,const int aStep, Metric aMetricsBetweenEmittedSections){}

//*******************************************************************
void closeSection(const SectionsTrace<Metric>& aSections, const int aStep){}

//*******************************************************************
void skaereRecords(const int aFreeExtraeId,  
                   const std::vector<extrae_value_t>& aValues, 
                   const std::vector<std::string>& aStr_description_values){}

//*******************************************************************
void errorOpenSections(std::vector<char const*>& aOpenSections, const int aStep){}

//*******************************************************************
void errorNumInstAboveNumMem(){}

//*******************************************************************
void errorUnopenedSections(const int aStep){}

//*******************************************************************
void errorWrongSections(const int aStep){}

//*******************************************************************
void errorChildrenBiggerThanParent(SectionsTrace<Metric>& aSections,
                                  typename SectionsTrace<Metric>::Node* n,
                                  const int aStep,
                                  const size_t aTotalAcc){}

//*******************************************************************
void errorIntegrity(typename SectionsTrace<Metric>::Node* n, bool bool_allChildrenAreDead, bool bool_allParentAreInHold){}

//*******************************************************************
void insideMPI(const int aStep, char const*const aSectionName){}
};

//*******************************************************************
// end of namespace

}
