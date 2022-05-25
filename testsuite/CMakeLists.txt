cmake_minimum_required(VERSION 3.18)
project(TestIndicator)


link_directories(../build)
include_directories(TestIndicator ../)
#target_include_directories(TestIndicator PUBLIC ../include)
#target_link_libraries(TestIndicator libVnaDataTool.dll.a)
find_library(TestIndicator NAMES VnaDataTool)
add_executable(TestIndicator main.cpp)