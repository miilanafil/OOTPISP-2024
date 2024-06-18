
cmake_minimum_required(VERSION 3.15.0)

project(LAB_05_220223)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(SOURCE_FILES  main.cpp)

set(HEADER_FILES Money.h Vvector.h VectorOnPriority.h)

set(ALL_SOURCES ${HEADER_FILES}
                ${SOURCE_FILES})


add_executable(${PROJECT_NAME} ${ALL_SOURCES})

