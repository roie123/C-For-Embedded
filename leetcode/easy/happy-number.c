#include <stdbool.h>
#include <stdio.h>

bool isHappy(int n) {
    int sum = 0;
    int temp = n;
    if (n == 2) return false;

    while (true) {
        if (n==2&&sum==0) {

            return false;
        }
        sum += (n % 10)*(n % 10);
        n /= 10;

        if (n == 0) {
            if (sum == 1) return true;
            n = sum;

            sum = 0;
        }
    }

    return false;
}


int main() {

    printf("%d \n", isHappy(3));
}
