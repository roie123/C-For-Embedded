cmake_minimum_required(VERSION 3.29)
project(C_Exercises C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c
        easy/palindrome_number.c
        easy/valid_palindrome.c
        easy/roman_to_integer.c
        easy/remove_element.c
        easy/remove_all_adjacent_duplicates_in_string.c
        easy/Find_the_Index_of_the_First_Occurrence_in_a_String.c
        easy/search_insert_position.c
        easy/length_of_last_word.c
        easy/add_binary.c
        easy/sqrt9(x).c
        easy/sqrt9(x)_better.c
        easy/climbing_stairs.c
        easy/climbing_stairs_not_recursive.c
        easy/remove-duplicates_from_sorted_list.c
        easy/valid_palindrom.c
    )