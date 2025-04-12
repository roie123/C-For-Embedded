#include <stdio.h>

void swap_any(void *n1, void *n2, size_t sz) {
    char *c1 = n1;
    char *c2 = n2;
    char temp;

    for(size_t i = 0; i < sz; i++) {
        temp = c1[i]; // *(c1 + i)
        c1[i] = c2[i];
        c2[i] = temp;
    }
}

int main(void) {
    int i1 = 5, i2 = 7;
    long l1 = 50, l2 = 70;

    int a1[] = {1,2,3}, a2[] = {5,6,7};

    char s1[256] = "ABCD", s2[256] = "1234567890XYZ!!!";

    swap_any(&i1, &i2, sizeof(i1));
    swap_any(&l1, &l2, sizeof(l1));
    swap_any(a1, a2, sizeof(a1));

    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);
    size_t max_slen = s1_len > s2_len ? s1_len : s2_len;
    swap_any(s1, s2, max_slen+1);

    printf("i1 = %d; i2 = %d\n", i1, i2);
    printf("l1 = %ld; l2 = %ld\n", l1, l2);
    return 0;
}