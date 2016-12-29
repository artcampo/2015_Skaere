#pragma once

#include <sys/time.h>

namespace SkaereTiming{

// #ifdef CLOCK
  typedef double TimeDelta;
// #else
//   typedef clock_t         TimeDelta;
// #endif

void        tick(TimeDelta& a);
double      tock(TimeDelta& a);

}
