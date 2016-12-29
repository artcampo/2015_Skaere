#pragma once
#include <string>
#include <vector>

namespace Skaere{

struct StackTrace {
  std::string getActualStackTrace() const;
  void Push(std::string&& name);
  void Pop();

private:
  std::vector<std::string> gSkaereStackTraces;
};

} //end namespace Skaere