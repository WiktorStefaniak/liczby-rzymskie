cmake_minimum_required(VERSION 3.27)
project(konwerter)

set(CMAKE_CXX_STANDARD 17)

add_executable(konwerter main.cpp
        rzymskie.cpp
        rzymskie.h)
