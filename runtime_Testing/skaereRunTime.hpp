#pragma once
#include "../StackTrace.hpp"
#include "MetricsTesting.hpp"
#include "../log/fullLog.hpp"
#include "../userRunTime.hpp"
#include "userRuntimeTesting.hpp"
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

    UserRuntime<MetricsTesting,FullLog>*   userRT;
    
    void outputSectionsAsDot();

  };
  
  extern template class Runtime<StackTrace>;
} //end namespace Skaere

extern std::unique_ptr<Skaere::Runtime<Skaere::StackTrace>> gSkaereRuntime;
