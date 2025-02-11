#include <stdio.h>
/**
 * @file main.c
 * @brief
 * This program is meant to convert miles to KM and present it to the user
 * @author Roie Natan Ivri
 * @date 11/02/2025 21:59
 * @version 1.0
 *
 * @details
 * This file is part of a the first lesson in C for embedded.
 *
 */


typedef double distance;

int main(void) {
    distance distance;
    printf("Enter the distance in miles \n");
    scanf("%lf", &distance); // using the lf formant for double
    printf("the distance in KM is : %lf", (distance * 1.609344));


    return 0;
}
