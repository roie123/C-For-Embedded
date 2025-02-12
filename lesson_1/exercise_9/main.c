#include <stdio.h>

int main(void) {
    int a, b,c;
    a = 6;
    b = 3;
    printf("The numbers are : a= %d b= %d \n", a, b);
    c=a;
    a=b;
    b=c;
    printf("The numbers are : a= %d b= %d \n", a, b);


    return 0;
}
