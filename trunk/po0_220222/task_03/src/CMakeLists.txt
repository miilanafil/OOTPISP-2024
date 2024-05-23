cmake_minimum_required(VERSION 3.15.0)

project(LAB_03_220222)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp
Circle.cpp Container.cpp Geometry.cpp Rectangle.cpp Triangle.cpp)

set(HEADER_FILES Circle.h Container.h Geometry.h Rectangle.h Triangle.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})