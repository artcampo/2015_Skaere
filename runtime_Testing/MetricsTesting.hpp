#pragma once
#include <vector>
#include <iostream>
#include "../Metrics.hpp"

namespace Skaere{

  //We inherit from MetricConfiguration instead of using it as template; I don't have enough knowledge to know wether it makes sense to templatize it.
  struct MetricsTesting : public Metrics, public MetricConfiguration {

    MetricsTesting(size_t aT, size_t aR) : _mT(aT), _mR(aR){}
    MetricsTesting() : _mT(0), _mR(0){}
    ~MetricsTesting(){};

    size_t   _mT;
    size_t   _mR;

    /*
    void     set_instThr(int t)   {Metrics::mInstThr=t;};
    void     set_simlThr(float t) {Metrics::mSimlThr=t;};
    */
    size_t   mT() const{ return _mT;};
    size_t   mR() const{ return _mR;};

    double metric() const{
      return double(_mR) / double(_mT);
    }

    //visibility issues
    unsigned int numInstThreshold() const { return mInstThr; }
    float        metricDiffThreshold() const { return mSimlThr; }
    unsigned int minInstance() const { return MetricConfiguration::minInstance(); }
    unsigned int instThr() const { return mInstThr; }
    float        simlThr() const { return mSimlThr; }    
    
    friend MetricsTesting operator+(const MetricsTesting& a, const MetricsTesting& b);

    friend std::ostream& operator<<(std::ostream& stream,
                                    const MetricsTesting& s) {
      stream << "inst: "  << s._mT << " ";
      stream << "mem: "   << s._mR;

      return stream;
    }
  };
} //end namespace Skaere
