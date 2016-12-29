#include "MetricsPapi.hpp"

namespace Skaere{

MetricsPapi operator+(const MetricsPapi& a, const MetricsPapi& b){
    return MetricsPapi(a._mT+ b._mT, a._mR + b._mR);
}


//*******************************************************************
unsigned int MetricConfiguration::numInstThreshold() const{
  return 100000000;
}

float MetricConfiguration::metricDiffThreshold() const{
  return 0.1f;
}

unsigned int MetricConfiguration::minInstance() const{
  return 3;
}


} //end namespace Skaere

