cmake_minimum_required(VERSION 3.15)
project(tarea_help)

set(CMAKE_CXX_STANDARD 20)

add_executable(tarea_help "src/main.cpp" src/lib.h src/template/stack.cpp src/template/stack.h)
