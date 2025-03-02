#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;
    int z = 0;
    printf("ENTER 3 NUMBERS SEPERATED BY SPACE: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y) {
        if (x >= z) {
            printf("MAX: %d", x);
            return 0;
        } else {
            printf("MAX : %d", z);
            return 0;
        }
    } else if (y >= z) {
        printf("MAX : %d", y);
    } else {
        printf("MAX : %d", z);
    }

    return 0;
}
