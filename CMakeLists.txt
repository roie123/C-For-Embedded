cmake_minimum_required(VERSION 3.29)
project(C_Exercises C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Exercises main.c
        lesson_10/homework/my_strcat_imp.c)
add_subdirectory(lesson_1/exercise_1)
add_subdirectory(lesson_2)
add_subdirectory(template_for_exercises)
add_subdirectory(leetcode)
