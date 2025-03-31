#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {
    int nums[] = {10, 20, 30, 40, 50, 60};
    // nums -> int[6] -> after decay: int*
    // &nums-> int(*)[6]   sized  4B*6 -> 24B

    //ansi clear screen
    printf("\033[2J\033[H");

    printf("%p\n", (void*) nums);
    printf("%p\n", (void*) &nums);
    puts("-----");

    printf("%p\n", (void *)(nums + 1));                                      
    printf("%p\n", (void *)(&nums+ 1));       
    puts("-----");
    


    return 0;
}