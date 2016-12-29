#include "MetricsTesting.hpp"

namespace Skaere{

MetricsTesting operator+(const MetricsTesting& a, const MetricsTesting& b){
    return MetricsTesting(a._mT+ b._mT, a._mR + b._mR);
}


//*******************************************************************
unsigned int MetricConfiguration::numInstThreshold() const{
  return 3000;
}

float MetricConfiguration::metricDiffThreshold() const{
  return 0.1f;
}

unsigned int MetricConfiguration::minInstance() const{
  return 3;
}

} //end namespace Skaere
