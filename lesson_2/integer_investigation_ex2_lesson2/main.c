#include <stdio.h>
#include <math.h>
/**
 * @file main.c
 * @brief this program will run some checks on two integers
 *
 * @author Roie Natan Ivri
 * @date 17/02/2025 20:48
 * @version 1.0
 *
 * @details
 *
 *
 */


int checkIfOdd(int num);

int checkIfPrime(int num);

int checkIfHasARoot(int num);

int main(void) {
    int number = 0;


    printf("Enter a number: ");
    scanf("%d", &number);


    checkIfHasARoot(number) ? printf("The number has a perfect root\n") : printf("the number doesnt have a perfect root\n");
    checkIfOdd(number) ? printf("the number isnt odd") : printf("the number is odd\n");
    checkIfPrime(number) ? printf("the number is prime\n") : printf("the number isnt a prime number\n");

    return 0;
}

/*
 *This method will check if the number has a perfect square root by finding the root as an integer, than checking if the ^2 is the same
 *@num : integer - the number we will check
 *returns and integer, 1 if the number has a perfect root, 0 (internally false) if it doesn't.
 */

int checkIfHasARoot(int num) {
    if (num <= 0) return 1;
    int root = (int) sqrt(num);
    return ((root * root) == num);
}
/*This method will
 *
 */
int checkIfOdd(int num) {


    return (num % 2 == 0);
}


int checkIfPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;

}