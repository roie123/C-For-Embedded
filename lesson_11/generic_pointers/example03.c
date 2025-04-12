#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_ints(int *a, size_t len) {
    while(len--) {
        printf("%d ", *a++);
    }
    puts("");
}

void reverse_ints(int *a, size_t len) {
    //i
    //len - 1 - i

    //left++ right--
    int temp;

    for (size_t left = 0, right = len-1
        ; left < right
        ; left++, right--
    ) {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;
    }
}

int main(void) {

    int a1[] = {1, 2, 3, 4, 5, 6};

    print_ints(a1, sizeof a1 / sizeof *a1);
    reverse_ints(a1, (sizeof a1/sizeof *a1));
    print_ints(a1, sizeof a1 / sizeof *a1);

    return 0;
}