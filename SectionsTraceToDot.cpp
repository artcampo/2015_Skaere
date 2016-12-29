#include "SectionsTraceToDot.hpp"

namespace Skaere{
  
  unsigned int gradient1( const double max, const double min, const double t){
    double x = ((t-min)/max)/(max-min);
    return (unsigned char)( double(255.0)*x);
  }

  unsigned int gradient2( const double max, const double min, const double t){
    double x = 1.0 - ((t-min)/max)/(max-min);
    return (unsigned char)( double(255.0)*x);
  }
  
} //end namespace Skaere
