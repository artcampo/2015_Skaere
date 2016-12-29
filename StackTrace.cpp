#include "StackTrace.hpp"
#include <string>
#include <vector>

namespace Skaere{


std::string StackTrace::getActualStackTrace() const {
  std::string ret;
  for(std::string const& str : gSkaereStackTraces) {
    ret += ';';//temporary separator
    ret += str;
  }
  return ret;
}

void StackTrace::Push(std::string&& name) {
  gSkaereStackTraces.push_back(name);
}
void StackTrace::Pop() {
  gSkaereStackTraces.pop_back();
}

} //end namespace Skaere