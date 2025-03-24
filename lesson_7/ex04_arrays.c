#include <stdio.h>
#include <stdbool.h>

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");

    int numbers[] = {10, 20, 30, 40, 50, 60};
    const size_t sz = sizeof numbers / sizeof numbers[0];
    
    //be careful when using int for indexes
    for (int i = 0; i < sz; ++i)
    {
        printf("%d ", numbers[i]);
    }
    puts("");

    for (size_t i = 0; i < sz; ++i)
    {
        printf("%d ", numbers[i]);
    }
    puts("");


    return 0;
}