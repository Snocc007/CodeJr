cmake_minimum_required(VERSION 3.16)
project(Hello)

set(CMAKE_CXX_STANDARD 14)

add_executable(cmake_Hello main.cpp calc.cpp)
add_executable(cmake_Hello_calc main.cpp calc.cpp)
add_library(test_library STATIC calc.cpp)