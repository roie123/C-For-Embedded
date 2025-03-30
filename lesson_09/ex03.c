#include <stdio.h>
#include <stdbool.h>

int main(void) {
    {
        int n = 123;
        int *p1 = &n;
        const int *cp2 = p1;
        //problematic
        int *p3 = cp2;

        *p1 = 1111;
        //*cp2 = 222; //compile error
    }

    {
        int n = 123;
        int *p1 = &n;
        const int *cp2 = p1;
        //problematic
        int *p3 = cp2;

        *p1 = 1111;
        //*cp2 = 222; //compile error
    }


    return 0;
}