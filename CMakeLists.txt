cmake_minimum_required(VERSION 3.22)
project(dz11)

set(CMAKE_CXX_STANDARD 14)

add_executable(dz11 main.cpp Shape.cpp Shape.h Rectangle.cpp Rectangle.h Quadrilateral.cpp Quadrilateral.h Romb.cpp Romb.h)
