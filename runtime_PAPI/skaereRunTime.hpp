#pragma once
#define SKAERE_PAPI
#include "../StackTrace.hpp"
#include "MetricsPapi.hpp"
#include "../log/fullLog.hpp"
#include "../userRunTime.hpp"
#include "userRuntimePapi.hpp"
#include <memory>

namespace Skaere {
  /// We register here any may/must alias access to memory.
  /// Candidates: Memory, Output, SectionsBlabla -> make a list on TeX
  template<class StackTr=StackTrace>
  struct Runtime : public StackTr {
    Runtime(bool const flushToFile, bool const showStats, int const timeThreshold, 
                                           int const instThr,  int const simlThr );
    ~Runtime();

    void AddExecutedInstructions(int execInstr, int const numMemOps);
    bool  startSection  (char const*const aSectionName);
    void  endSection    (char const*const aSectionName);
    void  tick          ();
    void  tock          ();
    void  end           ();
    void  insideMPI     ();
    void  outsideMPI    ();

    UserRuntime<MetricsPapi,BlankLog>*   userRT;
    
    void outputSectionsAsDot();

  };
  
  extern template class Runtime<StackTrace>;
} //end namespace Skaere

extern std::unique_ptr<Skaere::Runtime<Skaere::StackTrace>> gSkaereRuntime;

