cmake_minimum_required(VERSION 3.6)
project(KB)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Movie.h Movie.cpp Actor.h Actor.cpp Graph.h Graph.cpp MovieTree.h MovieTree.cpp)
add_executable(KB ${SOURCE_FILES})