cmake_minimum_required(VERSION 3.7)
project(Dziaania_na_macierzach)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vectors.cpp Vectors.h matrices.cpp matrices.h)
add_executable(Dziaania_na_macierzach ${SOURCE_FILES})