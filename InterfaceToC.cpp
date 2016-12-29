#include "skaereRunTime.hpp"
#include "runtime/skaere.h"
#include "fail/fail.hpp"

/// C interface

void __runtimeSkaere_mainArgs(int const argc, char const*const*const argv) {
}

/// Temporarily assigns a value. Restores original value on object destruction.
template<typename T, T tempVal>
struct With {
  With(T& t) : mt(t) {
    oldVal=t;
    t = tempVal; }
  ~With() {
    mt=oldVal; }
private:
  T& mt;
  T oldVal;
};

void __runtimeSkaereEnd(void)
{
//   std::cout << "Skaere end (1)" << std::endl;
  gSkaereRuntime->end();
//   std::cout << "Skaere end (2)" << std::endl;
}




void __runtimeSkaereAddExecutedInstructions(int const execInstr, int const numMemOps) {  
  if(gSkaereRuntime != nullptr)
    gSkaereRuntime->AddExecutedInstructions(execInstr, numMemOps);
}

bool __runtimeSkaere_StartSection(char const*const sectionId) {  
  return gSkaereRuntime->startSection(sectionId);
}


void __runtimeSkaere_EndSection(char const*const sectionId) {  
  gSkaereRuntime->endSection(sectionId);
}
// static int numExec = 0;

void __runtimeSkaere_tick(void) {                     
  gSkaereRuntime->tick(); 
}

void __runtimeSkaere_tock(void) {
//   std::cout << "RT: tock\n";
  gSkaereRuntime->tock();  
}

void __runtimeSkaere_insideMPI(void){
  gSkaereRuntime->insideMPI();  
}

void __runtimeSkaere_outsideMPI(void){
  gSkaereRuntime->outsideMPI();  
}

// void skaere_print_dot (void){
//   gSkaereRuntime->outputSectionsAsDot();  
// }

