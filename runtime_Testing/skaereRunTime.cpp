#include "skaereRunTime.hpp"
#include "../StackTrace.hpp"
#include <memory>

std::unique_ptr<Skaere::Runtime<Skaere::StackTrace>> gSkaereRuntime;
