#include <stdio.h>

/**
 * @file main.c
 * @brief
 * This program is meant to get two integers from the user and see which of thos is bigger , the average, division and the module operation
 * as per the subject, i didnt want to use if's , switch cases and such
 * i wanted minimal use of space so i limited myself to two declarations, because y not
 * @author Roie Natan Ivri
 * @date 19/02/2025 10:40
 * @version 1.0
 *
 * @details
 * This file is the third exercise of the second lesson
 *
 */

int main(void) {
    int x, y;
    printf("Please enter the first number: ");
    scanf("%d", &x);
    printf("Please enter the seconed number: ");
    scanf("%d", &y);
    printf("The average is  %lf \n", (x+y)/2.00);//used  some integer.00 to make the result into double

    printf("The bigger (or equal) number is  %d\n", x > y ? x : y);
    printf("The number of times %d can be divided by %d is  %d  \n", x > y ? x : y, x < y ? x : y,
           x > y ? x / y : y / x);
    printf( x>=y ?  (x >= y)&&(x%y==0) ?"you dont get a fracture":"you do get a fracture":"");

    printf( x<y? ((x < y)&&(y%x==0) ?"you dont get a fracture":"you do get a fracture") :"");

    return 0;
}
