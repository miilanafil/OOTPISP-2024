cmake_minimum_required(VERSION 3.15.0)

project(LAB_04_220216)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(SOURCE_FILES  main.cpp Time.cpp)

set(HEADER_FILES Time.h Vector.h)

set(ALL_SOURCES ${HEADER_FILES}
                ${SOURCE_FILES})


add_executable(${PROJECT_NAME} ${ALL_SOURCES})