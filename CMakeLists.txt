cmake_minimum_required(VERSION 3.28)
project(untitled3 C)

set(CMAKE_C_STANDARD 11)

file(GLOB SOURCES "*.c")

add_executable(a ${SOURCES})