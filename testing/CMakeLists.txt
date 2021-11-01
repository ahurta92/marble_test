cmake_minimum_required(VERSION 3.20)
project(Marbles)

set(CMAKE_CXX_STANDARD 14)

add_executable(Marble_Testing main.cpp tests.cpp problems.cc)
