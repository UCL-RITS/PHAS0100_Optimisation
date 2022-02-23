cmake_minimum_required(VERSION 3.0)

project(optimisation_exercises)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)
add_executable(sum source/sums.cpp)
#target_compile_options(sum PRIVATE -ftree-vectorize -O3 -fopt-info-vec)
