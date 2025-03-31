/*
1) make a fibonacci function that returns the i number 
   in the sequence:
   place: 0 1 2 3 4 5 6 7
   value: 0 1 1 2 3 5 8 13
*/

#include <stdio.h>
#include <stdbool.h>

typedef long long unsigned llu;

llu fibo(llu pos);

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");

    printf("%llu\n", fibo(10));

    return 0;
}

llu fibo(llu pos) {
    if (pos <= 1) {
        return pos;
    }

    //else pos >= 2
    
    return fibo(pos - 2) + fibo(pos - 1);
    // llu temp1 = fibo(pos - 1);
    // llu temp2 = fibo(pos - 2);
    // llu result = temp1 + temp2;
    // return result;
}
