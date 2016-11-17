cmake_minimum_required(VERSION 2.8)
project(Travisci)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fprofile-arcs -ftest-coverage")

set(SOURCE_FILES main.cpp)
add_executable(Travisci ${SOURCE_FILES})
find_library(LIB_SIMGRID NAMES simgrid libsimgrid.so libprofiler.so.V123)
target_link_libraries(Travisci ${LIB_SIMGRID})
