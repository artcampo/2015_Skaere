#include "skaereRunTime.hpp"
#include "skaereRunTime.impl.hpp"
#include "runtime/skaere.h"
#include "fail/fail.hpp"

/// C interface

//Inits only if it was not init before
//simlThr is [0,1000]
void __runtimeSkaereInit(int const flushToFile, int const stats, int const cutSeconds, 
                                           int const instThr,  int const simlThr  )
{
  secure_invariant(flushToFile==0 || flushToFile==1, "Internal error: flushToFile can only be 1 or 0. It has another value");
  //TODO: use make_unique when available
  
  secure_invariant(!gSkaereRuntime, "You should only initialize skaere once");
  gSkaereRuntime = decltype(gSkaereRuntime)
    {new Skaere::Runtime<Skaere::StackTrace>{
      static_cast<bool>(flushToFile),
      static_cast<bool>(stats),
      static_cast<int> (cutSeconds),
      static_cast<int> (instThr),
      static_cast<int> (simlThr)
      }
    };

//   std::cout << "Skaere init\n";
}
