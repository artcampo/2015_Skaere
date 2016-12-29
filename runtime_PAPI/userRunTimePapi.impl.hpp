#pragma once
#include "../userRunTime.impl.hpp"
#include "MetricsPapi.hpp"
#include "../log/blankLog.hpp"
// #include "../log/fullLog.hpp"

namespace Skaere {

////////////////////////////////////////////////////////////////////////
// Specialization
template<>
void UserRuntime<MetricsPapi,BlankLog>::initMetrics(){
  eventSet = PAPI_NULL;
  int retval = PAPI_library_init(PAPI_VER_CURRENT);

  if (retval != PAPI_VER_CURRENT){
    std::cout << "Skaere :: PAPI library init error." << std::endl; exit(1); }

  retval = PAPI_create_eventset(&eventSet); 
  if (retval != PAPI_OK){
    std::cout << "error: " << retval << std::endl;
    if(retval == PAPI_EINVAL )std::cout << "One or more of the arguments is invalid. "<< std::endl;
    if(retval == PAPI_ENOMEM )std::cout << "Insufficient memory to complete the operation. "<< std::endl;
    if(retval == PAPI_ENOEVST )std::cout << "The event set specified does not exist. "<< std::endl;
    if(retval == PAPI_EISRUN )std::cout << "The event set is currently counting events. "<< std::endl;
    if(retval == PAPI_ECNFLCT) std::cout << "The underlying counter hardware can not count this event and other events in the event set simultaneously. "<< std::endl;
    if(retval == PAPI_ENOEVNT  )std::cout << "internal"<< std::endl;
    std::cout << "Skaere :: PAPI library init error 1." << std::endl; exit(1); }


  if (PAPI_add_event(eventSet, PAPI_TOT_CYC) != PAPI_OK){
    std::cout << "Skaere :: PAPI library init error 3." << std::endl; exit(1); }
    
  if (PAPI_add_event(eventSet, PAPI_TOT_INS) != PAPI_OK){
    std::cout << "Skaere :: PAPI library init error 2." << std::endl; exit(1); }

  if (PAPI_start(eventSet) != PAPI_OK){
    std::cout << "Skaere :: PAPI library init error 4." << std::endl; exit(1); }
    
  if (PAPI_reset(eventSet) != PAPI_OK){
    std::cout << "Skaere :: PAPI library init error 5." << std::endl; exit(1); }  
    
//   std::cout << "Skaere :: PAPI working." << std::endl;
}


// a read always resets internal value of metrics
template<>
const MetricsPapi UserRuntime<MetricsPapi,BlankLog>::readMetrics(){
  MetricsPapi m  = mMetricsRuntime;
  if (PAPI_read(eventSet, values) != PAPI_OK){
    std::cout << "Skaere :: PAPI library error 6." << std::endl; exit(1); }  
  if (PAPI_reset(eventSet) != PAPI_OK){
    std::cout << "Skaere :: PAPI library error 7." << std::endl; exit(1); }

  mMetricsRuntime   = MetricsPapi(values[0], values[1]);
//   std::cout << "Skaere :: PAPI read " << values[0] << ", "<< values[1] << std::endl;
  return m;  
}

 template<>
void  UserRuntime<MetricsPapi,BlankLog>::AddExecutedInstructions(int execInstr, int const numMemOps){

}

} //end namespace Skaere

