#include "SectionsTrace.hpp"
#include <string>
#include <vector>
#include <cstring>
#include <iostream>

namespace Skaere{
  extern char const*const main_string;

  //*******************************************************************
  std::string simplifyName( char const*const  id , const int maxLenght){
    std::string s(id);
    std::replace( s.begin(), s.end(), ':', ' ');
    return s.substr(0,maxLenght);
  }
} //end namespace Skaere
