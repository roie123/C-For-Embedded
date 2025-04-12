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
    int numbers1[] = { 10, 20, 30, 40, 50};
    int numbers2[] = {111,222,333,444,555};

    printf("numbers2 before:");
    print_ints(numbers2, sizeof(numbers2)/sizeof(*numbers2));

    //numbers2 = numbers1
    memcpy(numbers2, numbers1, sizeof(numbers1));

    printf("numbers2 after :");
    print_ints(numbers2, sizeof(numbers2)/sizeof(*numbers2));

    return 0;
}
