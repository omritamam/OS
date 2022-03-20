cmake_minimum_required(VERSION 3.20)
project(ex1 C)

set(CMAKE_C_STANDARD 99)

add_library(ex1 library.c osm.c cmake-build-debug/test.cpp cmake-build-debug/test.c)
