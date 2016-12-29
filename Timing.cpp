#include "Timing.hpp"
#include <sys/time.h>


namespace SkaereTiming{

/* If the clock macro is defined, we use the POSIX clock_gettime,
 * and CLOCK defines which timer should be used.  Otherwise, we use
 * the system clock() command.
 */

void wtime(double *t)
{
   static int sec = -1;
   struct timeval tv;
   gettimeofday(&tv, 0);
   if (sec < 0) sec = tv.tv_sec;
   *t = (tv.tv_sec - sec) + 1.0e-6*tv.tv_usec;
}

void tick(TimeDelta& a)
{
  wtime(&a);
// #ifdef CLOCK
//     gettimeofday(&a, 0);
// #else
//     a = clock();
// #endif
}


double tock(TimeDelta& a)
{
  double current;
  wtime(&current);
  return current - a;
}


}
