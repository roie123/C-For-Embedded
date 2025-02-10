cmake_minimum_required(VERSION 3.29)
project(C_Exercises C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Exercises main.c)
add_subdirectory(day_by_integer)
add_subdirectory(integer_investigation_ex2)
