#include <stdio.h>

int main(void) {
    int number=0;
    int first_digit =0;
    int second_digit =0;
    int third_digit =0;
    printf("ENTER A 3 DIGIT NUMBER :");
    scanf("%d",&number);

    if (number/100>0 && number/100<1 ) {
        printf("Invalid number");
        return 1;

    }
    first_digit=number%10;
    number/=10;
    second_digit=number%10;
    number/=10;
    third_digit=number%10;

    if (first_digit<second_digit && second_digit<third_digit) {
        printf("Very descending ");
        return 0;
    }

    if (first_digit<=second_digit && second_digit<third_digit) {
        printf("descending");
        return 0;
    }

    if (first_digit<second_digit && second_digit<=third_digit) {
        printf("descending");
        return 0;
    }
    if (first_digit>second_digit && second_digit>third_digit) {
        printf("Very Ascending ");
        return 0;
    }

    if (first_digit>=second_digit && second_digit>third_digit) {
        printf("ascending");
        return 0;
    }
    if (first_digit>second_digit && second_digit>=third_digit) {
        printf("Ascending");
        return 0;
    }



    printf("Digits neither ascending nor descending ");





;}
