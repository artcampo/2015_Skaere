#pragma once
#include "../userRunTime.impl.hpp"
#include "MetricsTesting.hpp"
//#include "../log/fullLog.hpp"
#include "../log/blankLog.hpp"


namespace Skaere {

////////////////////////////////////////////////////////////////////////
// Specialization
template<>
void UserRuntime<MetricsTesting,FullLog>::initMetrics(){
}


// a read always resets internal value of metrics
template<>
const MetricsTesting UserRuntime<MetricsTesting,FullLog>::readMetrics(){
  MetricsTesting m  = mMetricsRuntime;
  mMetricsRuntime   = MetricsTesting();
  return m;
}

 template<>
void  UserRuntime<MetricsTesting,FullLog>::AddExecutedInstructions(int execInstr, int const numMemOps){
//   *mLogfile << "Skaere: count" << execInstr << "\n";
  mMetricsRuntime = mMetricsRuntime                       + MetricsTesting(execInstr,numMemOps);
}

} //end namespace Skaere
