#pragma once
#include <vector>
#include <iostream>

namespace Skaere{

struct MetricConfiguration {
  unsigned int numInstThreshold() const;
  float        metricDiffThreshold() const;
  unsigned int minInstance() const;
  unsigned int instThr() const;
  float        simlThr() const;
};  
  
struct Metrics{
  static int   mInstThr;
  static float mSimlThr;  
  
  virtual ~Metrics(){};
  
  virtual size_t  mT() const          = 0;
  virtual size_t  mR() const          = 0;
  virtual double  metric() const      = 0;
  
  
  void     set_instThr(int t)   {mInstThr=t;};
  void     set_simlThr(float t) {mSimlThr=t;};  
  /*
  virtual void    set_instThr(int t)  = 0;
  virtual void    set_simlThr(float t)= 0;
  
  */
};


} //end namespace Skaere