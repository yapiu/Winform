cmake_minimum_required(VERSION 3.29.2)
project(Winform)

set(CMAKE_CXX_STANDARD 11)

add_executable(Winform main.cpp VSTUB.cpp VSTUB.h drawer.h drawer.cpp object.h object.cpp) 