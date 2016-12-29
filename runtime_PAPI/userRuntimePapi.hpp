#pragma once
#include "../userRunTime.hpp"
#include "MetricsPapi.hpp"
#define SKAERE_LOG
#include "../log/fullLog.hpp"
#include "../log/extraLog.hpp"
#include "../log/blankLog.hpp"
#include <papi.h>

namespace Skaere {
  template<>
  void UserRuntime<MetricsPapi,BlankLog>::initMetrics();

  template<>
  const MetricsPapi UserRuntime<MetricsPapi,BlankLog>::readMetrics();

 template<>
 void UserRuntime<MetricsPapi,BlankLog>::AddExecutedInstructions(int execInstr, int const numMemOps);
} //end namespace Skaere

//extern symbol
namespace Skaere {
  extern template class UserRuntime<MetricsPapi,BlankLog>;

} //end namespace Skaere

