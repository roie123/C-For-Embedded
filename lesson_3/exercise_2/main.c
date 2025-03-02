#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;
    printf("ENTER 2 NUMBERS :");
    scanf("%d %d",&x,&y);
    if (y==0) {

        printf("Invalid numbers ");
        return 1;

    }
    if ((x%2==0)  &&  (y%2==0) && (x%y==0)  ) {
        printf("Valid numbers ");
        return 0;
    }

    printf("Invalid numbers ");
    return 1;


;}
