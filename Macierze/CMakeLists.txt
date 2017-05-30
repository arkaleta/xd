cmake_minimum_required(VERSION 3.7)
project(Macierze)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp macierze.h cmake-build-debug/macierze.cpp)
add_executable(Macierze ${SOURCE_FILES} macierze.h)