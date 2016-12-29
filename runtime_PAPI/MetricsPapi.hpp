#pragma once
#include <vector>
#include <iostream>
#include "../Metrics.hpp"

namespace Skaere{

  //We inherit from MetricConfiguration instead of using it as template; I don't have enough knowledge to know wether it makes sense to templatize it.
  struct MetricsPapi : public Metrics, public MetricConfiguration {

    
    MetricsPapi(size_t aT, size_t aR) : _mT(aT), _mR(aR){}
    MetricsPapi() : _mT(0), _mR(0){}
    ~MetricsPapi(){};


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
    
    friend MetricsPapi operator+(const MetricsPapi& a, const MetricsPapi& b);

    friend std::ostream& operator<<(std::ostream& stream,
                                    const MetricsPapi& s) {
      stream << "cycl: "  << s._mT << " ";
      stream << "inst: "  << s._mR;

      return stream;
    }
  };
} //end namespace Skaere
