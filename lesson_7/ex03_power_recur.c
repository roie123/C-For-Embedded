#include <stdio.h>
#include <stdbool.h>

typedef unsigned long ul;

ul my_pow(ul base, ul power) {
    if (power == 0)
        return 1;
    
    if (power == 1)
        return base;
    
    ul half = my_pow(base, power/2);

    if (power % 2 == 0) {
        return half * half;
    }
    else {
        return base * half * half;
    }
}

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");
    
    ul x = my_pow(2, 30);
    printf("%lu\n", x);
    return 0;
}