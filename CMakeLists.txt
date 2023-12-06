# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MathLibraryExample)

set(CMAKE_CXX_STANDARD 11)

add_library(mathlib mathlib.cpp)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE mathlib)
