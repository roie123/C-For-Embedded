#include <stdio.h>
#include <string.h>

void print_ints(int *a, size_t len) {
    while (len--) {
        printf("%3d ", *a);
        a++;
    }


    puts("");
}

int main(void) {
    int numbers[] = {
         10, 20, 30, 40, 50, //  0  1  2  3  4 
         60, 70, 80, 90,100, //  5  6  7  8  9
        110,120,130,140,150, // 10 11 12 13 14
    };



    printf("numbers before:");
    print_ints(numbers, sizeof(numbers)/sizeof(*numbers));
    
    // copy 60-90 over 50-80
    //memcpy(numbers + 4, numbers + 5, 4 * sizeof(*numbers));
    //warning memcpy with overlapping memory is UB!
    memmove(numbers + 4, numbers + 5, 4 * sizeof(*numbers));
    
    printf("numbers after :");
    print_ints(numbers, sizeof(numbers)/sizeof(*numbers));

    return 0;
}
