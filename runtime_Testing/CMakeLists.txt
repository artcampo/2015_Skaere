include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../include/runtime")
include_directories("$ENV{EXTRAE_HOME}/include")
#include_directories("$ENV{MPI_HOME}/include")
#include_directories("$ENV{MPI_HOME}/include/openmpi")
include_directories("$ENV{PAPI_HOME}/include")

add_definitions( -g)

set(files
    ${filesCommon}
    MetricsTesting.cpp
    MetricsTesting.hpp
    skaereRunTime.cpp
    skaereRunTime.hpp
    skaereRunTime.impl.hpp
    userRuntimeTesting.cpp
    userRuntimeTesting.hpp
    userRunTimeTesting.impl.hpp
    InterfaceToC_Testing.cpp
)

add_llvm_library(skaere-runtime-testing STATIC ${files})
target_link_libraries(skaere-runtime-testing m log LLVMSupport)
