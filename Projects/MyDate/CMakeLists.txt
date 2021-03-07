cmake_minimum_required(VERSION 3.17)
project(MyDate)

set(CMAKE_CXX_STANDARD 14)

add_executable(MyDate myDate.h myDate.cpp testDate.cpp)