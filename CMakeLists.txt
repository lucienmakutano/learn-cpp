cmake_minimum_required(VERSION 3.21)
project(lean_cpp)

set(CMAKE_CXX_STANDARD 23)

# add_executable(lean_cpp variable/var.cpp variable/const.cpp main.cpp)
add_executable(lean_cpp collections/array.cpp collections/vector.cpp main.cpp)
