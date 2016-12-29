include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../include/runtime")
include_directories("$ENV{EXTRAE_HOME}/include")
include_directories("$ENV{MPI_HOME}/include")
include_directories("$ENV{MPI_HOME}/include/openmpi")
include_directories("$ENV{PAPI_HOME}/include")
#add_definitions( -g)
#add_definitions( -O3)


set(filesCommon
    ../StackTrace.hpp
    ../StackTrace.cpp
    ../Section.hpp
    ../SectionsTrace.cpp
    ../SectionsTrace.hpp
    ../Stats.hpp
    ../Timing.cpp
    ../Timing.hpp
    ../Metrics.cpp
    ../Metrics.hpp
    ../SectionsTraceToDot.hpp
    ../SectionsTraceToDot.cpp
    ../InterfaceToC.cpp
    ../InterfaceToC_MPI.cpp
    ../userRunTime.hpp
    ../userRunTime.impl.hpp
)

add_subdirectory(runtime_Testing)
add_subdirectory(runtime_PAPI)

INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../../include/runtime/skaere.h
        DESTINATION "./include"
        )
