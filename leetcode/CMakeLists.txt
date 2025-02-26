cmake_minimum_required(VERSION 3.29)
project(C_Exercises C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c
        easy/palindrome_number.c
        easy/valid_palindrome.c
        easy/roman_to_integer.c
        easy/remove_element.c)