 cmake_minimum_required(VERSION 3.18)


 #set the projekt name and version

 project(VnaDataTool VERSION 1.0)

 #set the C++ standerd
 set(CMAKE_CXX_STANDARD 17)
 set(CMAKE_CSS_STANDATD_REQUIRED True)

 #configure a header dile to pass some of the CMake setting to the source code
 configure_file(version.h.in version.h)
add_library(${PROJECT_NAME} SHARED)

target_compile_definitions(${PROJECT_NAME} PRIVATE VNADATATOOL_LIBRARY)

target_sources(${PROJECT_NAME}
PRIVATE
    src/touchstoneV11.cpp
    src/touchstoneV20.cpp

    include/touchstoneV11.h
    include/touchstoneV20.h
    include/polar.h
    include/fileexception.h
    include/libsetting.h
    include/typedef.h

PUBLIC
    vnadatatool.h
)
target_include_directories(${PROJECT_NAME} PUBLIC

 $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
 $<INSTALL_INTERFACE:include>
)

#add_definitions(-DVNADATATOOL_LIBRARY)
#add_test(MainTest Test)
#add_subdirectory(testsuite)