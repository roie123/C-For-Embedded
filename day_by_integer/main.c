#include <stdio.h>
/*
*Author : Roie Ivri
* Date : 10.02.25
* This program will receive an integer and display the day the integer represents.
* This is not an optimised program at the slightness, it is built specifically with certain tools just to get familiar with them
 */

int validateX(int x);

enum days { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void) {
    int x;

    printf("please enter a number between 1 - 7 to get the day accordingly : ");
    scanf("%d", &x);


    if (!(validateX(x))) {
        printf("number is invalid\n");
        return 1;
    }

    const enum days day = x;
    switch (day) {
        case SUNDAY: {
            printf("Sunday\n");
            break;
        }
        case MONDAY: {
            printf("Monday\n");
            break;
        }
        case TUESDAY: {
            printf("Tuesday\n");
            break;
        }
        case WEDNESDAY: {
            printf("Wednesday\n");
            break;
        }
        case THURSDAY: {
            printf("Thursday\n");
            break;
        }
        case FRIDAY: {
            printf("Friday\n");
            break;
        }
        case SATURDAY: {
            printf("Saturday\n");
            break;
        }


        default: ;
    }


    return 0;
}

int validateX(int x) {
    return x >= 1 && x <= 7;
}
