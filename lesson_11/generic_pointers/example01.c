#include <stdio.h>

void swapi(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void swapl(long *n1, long *n2) {
    long temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(void) {
    int i1 = 5, i2 = 7;
    long l1 = 50, l2 = 70;

    swapi(&i1, &i2);
    swapl(&l1, &l2);

    printf("i1 = %d; i2 = %d\n", i1, i2);
    printf("l1 = %ld; l2 = %ld\n", l1, l2);

    return 0;
}