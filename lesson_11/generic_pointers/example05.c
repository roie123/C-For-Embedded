#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_ints(int *a, size_t len) {
    while(len--) {
        printf("%d ", *a++);
    }
    puts("");
}

void swap_any(void *n1, void *n2, size_t sz) {
    char *c1 = n1;
    char *c2 = n2;
    char temp;

    for(size_t i = 0; i < sz; i++) {
        temp = c1[i];
        c1[i] = c2[i];
        c2[i] = temp;
    }
}

//sz = size of cell
//len = length of the array
//(sz * len) = size of the array
//
void reverse_any(void *a, size_t sz, size_t len) {
    char *c = a;
    char temp;

    for (size_t left = 0, right = len*sz-1
        ; left < right
        ; left++, right--
    ) {
        temp = c[left];
        c[left] = c[right];
        c[right] = temp;
    }

    //reverse each byte in each cell
    for (size_t i = 0; i < len; i++) {
        for (size_t left = i*sz, right = (i+1)*sz - 1
            ;left < right
            ;left++, right-- 
        ) {
            temp = c[left];
            c[left] = c[right];
            c[right] = temp;
        }
    }

}



int main(void) {

    int a1[] = {1, 2, 3, 4, 5, 6};

    print_ints(a1, sizeof a1 / sizeof *a1);
    reverse_any(a1, sizeof *a1, (sizeof a1/sizeof *a1));
    print_ints(a1, sizeof a1 / sizeof *a1);

    return 0;
}