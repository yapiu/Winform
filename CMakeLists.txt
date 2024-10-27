cmake_minimum_required(VERSION 3.29.2)
project(Winform)

set(CMAKE_CXX_STANDARD 11)

add_executable(Winform main.cpp VSTUB.cpp VSTUB.h basePoint.h basePoint.cpp line.cpp line.h arc.h arc.cpp oArc.h oArc.cpp oLine.h oLine.cpp oSegment.h oSegment.cpp oSector.h oSector.cpp object.h object.cpp) 