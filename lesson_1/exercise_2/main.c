#include <stdio.h>
/**
 * @file main.c
 * @brief
 * This program is for the second exercise in the first lesson, it takes 2 integers
 * and print some actions with them
 * @author Roie Natan Ivri
 * @date 11/02/2025 20:04
 * @version 1.0
 *
 * @details
 * This file is part of the exercises directory
 *
 */

int main(void) {

    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&x,&y);
    printf("The numbers are %d %d \n",x ,y);
    printf("The sum is  %d \n",(x+y));
    int multiplication=x*y;
    printf("The result of multiplication is  %d \n",multiplication);
    printf("The result of multiplication without saving a variable  %d \n",(x*y));
    printf("The result of division without saving a variable  %f \n",((double)x/y));
    printf("The average without saving a variable  %f \n",((double)x+y)/2);
    return 0;


}
