#include <stdio.h>
#include <stdbool.h>

int main(void) {
    setbuf(stdout, NULL);

    //ansi clear screen
    printf("\033[2J\033[H");

    //                0   1   2   3   4   5
    int numbers[] = {10, 20, 30, 40, 50, 60};
    const size_t len = sizeof numbers / sizeof numbers[0];
    
    //be careful when using int for indexes
    for (int i = len - 1; i >= 0; --i)
    {
        printf("%d ", numbers[i]);
    }
    puts("");

    // this code is BUGGED:
    // for (size_t i = len - 1; i >= 0; --i) 
    // {
    //     printf("%d ", numbers[i]);
    // }
    // puts("");
    
    //solution: travel from 0 .. len-1 and calculate the index
    //          using len - 1 - i
    for (size_t i = 0; i < len; ++i) 
    {
        printf("%d ", numbers[len - 1 - i]);
    }
    puts("");

    //"dirty" solution: utilize unsigned wrap-around
    //                  and detect when we underflow from zero
    for (size_t i = len - 1; i < len; --i) 
    {
        printf("%d ", numbers[i]);
    }
    puts("");


    return 0;
}