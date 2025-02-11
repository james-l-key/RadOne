cmake_minimum_required(VERSION 3.15)
message(STATUS "IDF_PATH: $ENV{IDF_PATH}")
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(RadOne)

set(CMAKE_CXX_STANDARD 17)

