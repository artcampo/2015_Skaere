include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../include/runtime")
include_directories("$ENV{EXTRAE_HOME}/include")
# include_directories("$ENV{MPI_HOME}/include")
# include_directories("$ENV{MPI_HOME}/include/openmpi")
include_directories("$ENV{PAPI_HOME}/include/")
add_definitions( -lpapi)
add_definitions( -g )

set(files
    ${filesCommon}
    MetricsPapi.cpp
    MetricsPapi.hpp
    skaereRunTime.cpp
    skaereRunTime.hpp
    skaereRunTime.impl.hpp
    userRuntimePapi.cpp
    userRuntimePapi.hpp
    userRunTimePapi.impl.hpp
    InterfaceToC_Papi.cpp    
)

add_llvm_library(skaere-runtime-papi STATIC ${files})
target_link_libraries(skaere-runtime-papi m log LLVMSupport)
