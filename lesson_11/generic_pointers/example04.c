#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int a1[] = {0x01020304, 0x0A0B0C0D, 0x05060708 };



void print_ints(int *a, size_t len) {
    while(len--) {
        printf("%d ", *a++);
        //printf("%08X ", *a++);
    }
    puts("");
}

void swap_any(void *n1, void *n2, size_t sz) {
    char *c1 = n1;
    char *c2 = n2;
    char temp;

    for(size_t i = 0; i < sz; i++) {
        temp = c1[i]; // *(c1 + i)
        c1[i] = c2[i];
        c2[i] = temp;

        //print_ints(a1, sizeof a1 / sizeof *a1);
    }
}

//sz = size of cell
//len = length of the array
//(sz * len) = size of the array
//
void reverse_any(void *a, size_t sz, size_t len) {
    char *c = a;

    for (size_t left = 0*sz, right = (len-1)*sz
        ; left < right
        ; left+=sz, right-=sz
    ) {
        //swap bytes of c[left] with c[right] (sz bytes)
        //swap_any(&c[left], &c[right], sz);
        swap_any(c+left, c+right, sz);
    }
}



int main(void) {

    int a1[] = {1, 2, 3, 4, 5, 6};

    print_ints(a1, sizeof a1 / sizeof *a1);
    reverse_any(a1, sizeof *a1, (sizeof a1/sizeof *a1));
    print_ints(a1, sizeof a1 / sizeof *a1);

    return 0;
}