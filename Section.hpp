#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

//It doesn't add anything useful; the Metric template parameter does not need to inherit from Metrics at any point
//#include "Metrics.hpp"

namespace Skaere{

template<class Metric>
struct Section{

  Section(char const*const aId, bool aIs_instrumented, int aUniqueId) :
      id(aId)
    , is_instrumented(aIs_instrumented)
    , uniqueId(aUniqueId)
    , extraeId(-1)
    , hasExtraeId(false)
    , section_opened(false)       //A section was generated in the trace
    , is_leaf(false)              //Section is below an instrumented one, and it's not instrumented
    , tick_was_produced(false)    //A tick was accounted for this section, a matching tock must be accounted as well
    //, seconds(0.0f)
    , instances(1)
    , instancesInstrumented(0)
    , instancesNotInstrumented(0)
    , samples(0)
    , isDead(false)
    , hasMpiCalls(false)
    , wasEmitted(false)
    , index(0)
    , accumulated(0,0)
    {
      for ( int i = 0; i < bufferSize; ++i){
        counters[i] = Metric(0,0);
      }
    }

  char const*const          id;
  bool                      is_instrumented;
  int                       uniqueId;
  int                       extraeId;
  bool                      hasExtraeId;
  bool                      section_opened;
  bool                      is_leaf;
  bool                      tick_was_produced;
  //SkaereTiming::TimeDelta   currentTime;
  //double                    seconds;
  unsigned int              instances;
  unsigned int              instancesInstrumented;
  unsigned int              instancesNotInstrumented;
  unsigned int              samples;
  bool                      isDead;
  bool                      hasMpiCalls;
  bool                      wasEmitted;
  
private:
  //variables with PAPI counters
  const static int          bufferSize = 10;
  int                       index;

  //variables used only for Acceptance builds
  Metric      counters[bufferSize];
  Metric      accumulated;

public:
  ////////////////////////////////////////////////////////////////
  bool isInstrumented() const{
    return (is_instrumented or is_leaf);
  }

  ////////////////////////////////////////////////////////////////
  bool parentHasEnoughInfo( const unsigned int aMinInstance, const unsigned int aMinInstrucSingleInstance ) const{
    return ((instances > aMinInstance)
            or
            (instances == 1 and lastMeasureT() > aMinInstrucSingleInstance)
           );
  }

 ////////////////////////////////////////////////////////////////
  bool isInHold() const{
    return (!is_instrumented and !isDead);
  }

  ////////////////////////////////////////////////////////////////
  const Metric& lastMeasure() const{
    if(instances > 1 )  return counters[(index + (bufferSize - 1)) % bufferSize];
    else                return counters[(index) % bufferSize];
  }

  ////////////////////////////////////////////////////////////////
  const Metric& accMeasure() const{
    return accumulated;
  }

  ////////////////////////////////////////////////////////////////
  void increaseSamples(){
    ++samples;
  }

  ////////////////////////////////////////////////////////////////
  void addMeasure(const Metric& values){
    increaseSamples();
    //std::cout << "Adding: " << values << std::endl;
    accumulated     = accumulated     + values;
    counters[index] = counters[index] + values;
    index           = (index + 1) % bufferSize;
    counters[index] = Metric(0,0);
    //printLastMetrics();
//     std::cout << "Added: " << values[0] << ", " << values[1] << std::endl;
  }

  ////////////////////////////////////////////////////////////////
  void updateMeasure(const Metric& values){
    accumulated     = accumulated     + values;
    counters[index] = counters[index] + values;
  }

  ////////////////////////////////////////////////////////////////
  double averageMetrics(void) const{
    double  metric = 0.0;
    int     measures    = 0;

    for ( int i = 0; i < bufferSize; ++i)
      if( counters[i].mT() != 0 ){
        metric += counters[i].metric();
        measures++;
      }
    if(measures == 0)
      return 0.0;
    else
      return metric/double(measures);
  }


  ////////////////////////////////////////////////////////////////
  size_t accumMetricT(void) const{
    return accumulated.mT();
  }

  /*
  ////////////////////////////////////////////////////////////////
  size_t maxInst(void) const{
    size_t inst = lastInstMeasure();

    for ( int i = 0; i < bufferSize; ++i)
      if( counters[i].mNumInst != 0 and counters[i].mNumInst > inst)
        inst = counters[i].mNumInst;

    return inst;
  }
  */

  ////////////////////////////////////////////////////////////////
  size_t lastMeasureT(void) const{
    return lastMeasure().mT();
  }


  ////////////////////////////////////////////////////////////////
  void printLastMetrics(std::ostream& stream) const{
    stream << "{";
    for(int i = 0; i < bufferSize; ++i){
      stream << counters[(index + i) % bufferSize] << " ";
    }
    stream << "}";

  } 

  ////////////////////////////////////////////////////////////////
  friend std::ostream& operator<<(std::ostream& stream,
                     const Section& s) {
    stream << "[#"         << s.instances                << "/";
    stream <<                 s.instancesInstrumented    << ": ";
    //stream << " "         << s.instancesInstrumented    << "/";
    stream <<                s.instancesNotInstrumented << "] ";
    if(s.is_instrumented)
      stream << "inst ";
    if(s.isInHold())
      stream << "hold ";
    if(s.hasMpiCalls)
      stream << "MPI ";
    //stream <<                s.is_leaf                  << ") ";
    //stream << "{"         << s.section_opened           << "} ";
    stream << "] ";
    stream << "*"         << s.averageMetrics()         << "* ";

    stream << "<"         << s.uniqueId                 << ">: ";
    stream <<                s.id                       << " ";
    stream << "averInst: "<< s.accumMetricT()           << " ";

    stream << std::endl;

    return stream;
  }

};

} //end namespace Skaere
