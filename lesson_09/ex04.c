#include <stdio.h>
#include <stdbool.h>

int main(void) {

    {
        int n = 123;
        int const *p1 = &n;
        //code smell: taking risk that p1 points to const
        int *p2 = (int*)p1;
        *p2 = 456;
        //okay, because we know n is non-const
    }

    {
        const int n = 123;
        int const *p1 = &n;
        //code smell: before UB
        int *p2 = (int*)p1;
        //UB: Undefined Behavior
        *p2 = 456;
        //we don't know what will happen after this
    }

    int num1 = 100;
    const int num2 = 200;
    f(&num1);
    f(&num2);

    return 0;
}

void f(const int *p) {
    //code smell
    int *p2 = (int*)p; //warning discard const
    //UB
    *p2 = 111;
}