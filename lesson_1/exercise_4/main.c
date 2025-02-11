#include <stdio.h>
/**
 * @file main.c
 * @brief
 * This exerise i about getting an input from the user in the form of char, and giving some info on it.
 * including some casting into char and int
 * @author Roie Natan Ivri
 * @date 11/02/2025 21:44
 * @version 1.0
 *
 * @details
 * This file is part of the exercises from the first lesson
 *
 */

int main(void) {

    char selected_char;
    printf("Enter a character: ");
    scanf("%c" , &selected_char);
    printf("%d \n", (int*)selected_char);// using casting, the 'char' is just a number in another representation
    printf("The Character is %c \n", selected_char);
    printf("The next character is  %c \n", (selected_char+1)); // using the %c format for char


    return 0;
}
