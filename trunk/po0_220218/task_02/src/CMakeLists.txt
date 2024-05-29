cmake_minimum_required(VERSION 3.15.0)

project(LAB_02_220218)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp
Detail.cpp Good.cpp Mechanism.cpp Node.cpp)

set(HEADER_FILES Detail.h Good.h Mechanism.h Node.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})