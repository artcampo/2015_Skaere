#pragma once
#include "../userRunTime.hpp"
#include "MetricsTesting.hpp"
#define SKAERE_LOG
#include "../log/fullLog.hpp"
// #include "../log/extraLog.hpp"

// Members which could be specialized elsewhere
namespace Skaere {
  template<>
  void UserRuntime<MetricsTesting,FullLog>::initMetrics();

  template<>
  const MetricsTesting UserRuntime<MetricsTesting,FullLog>::readMetrics();

 template<>
 void UserRuntime<MetricsTesting,FullLog>::AddExecutedInstructions(int execInstr, int const numMemOps);
} //end namespace Skaere

//extern symbol
namespace Skaere {
  extern template class UserRuntime<MetricsTesting,FullLog>;

} //end namespace Skaere
