cmake_minimum_required(VERSION 3.15.0)

project(LAB_03_220227)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES Main.cpp Number.cpp Integer.cpp Real.cpp Complex.cpp Container.cpp)

set(HEADER_FILES Number.h Integer.h Real.h Complex.h Container.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})