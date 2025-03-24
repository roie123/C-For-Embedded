#include <stdio.h>
#include <stdbool.h>

typedef unsigned long ul;

ul my_pow(ul base, ul power) {
    ul result = 1;

    for (ul i = 0; i < power; ++i) {
        result *= base;
    }

    return result;
}

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");

    //code
    printf("%lu\n", my_pow(2, 3));
    printf("%lu\n", my_pow(4, 5));

    return 0;
}