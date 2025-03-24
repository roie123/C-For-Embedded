#include <stdio.h>
#include <stdbool.h>

typedef unsigned long ul;

ul my_pow(ul base, ul power) {
    if (power == 0) return 1;

    // return base * my_power(base, power - 1);
    
    ul temp = my_pow(base, power - 1);
    ul result = base * temp;
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