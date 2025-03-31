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
    
    uintptr_t up1 = (uintptr_t)nums;
    uintptr_t up2 = (uintptr_t)&nums;
    printf("%" PRIuPTR "\n", up1);
    printf("%" PRIuPTR "\n", up2);
    puts("-----");

    printf("%" PRIuPTR "\n", (uintptr_t)nums);
    printf("%" PRIuPTR "\n", (uintptr_t)&nums);
    puts("-----");

    printf("%" PRIuPTR "\n", (uintptr_t)(nums + 1));
    //                                        + 4B
    printf("%" PRIuPTR "\n", (uintptr_t)(&nums+ 1));
    //                                        + 24B
    puts("-----");
    


    return 0;
}