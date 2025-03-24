#include <stdio.h>
#include <stdbool.h>

int main(void) {
    setbuf(stdout, NULL);

    //ansi clear screen
    printf("\033[2J\033[H");

    //                0   1   2   3   4   5    (len: 6)
    int numbers[] = {10, 20, 30, 40, 50, 60};
    const size_t len = sizeof numbers / sizeof numbers[0];
    
    //be careful when using int for indexes
    for (size_t i = 0; i < len / 2; ++i)
    {
        printf("(%d & %d) ", numbers[i], numbers[len - 1 - i]);
    }
    puts("");

    //be careful when using int for indexes
    for ( size_t ileft = 0, iright = len - 1
        ; ileft < iright
        ; ++ileft, --iright)
    {
        printf("(%d & %d) ", numbers[ileft], numbers[iright]);
    }
    puts("");



    //be careful when using int for indexes
    for ( size_t ileft = 0, iright = len - 1
        ; ileft <= iright
        ; ++ileft, --iright)
    {
        printf("(%d & %d) ", numbers[ileft], numbers[iright]);
    }
    puts("");

    return 0;
}