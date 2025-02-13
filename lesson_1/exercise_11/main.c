#include <stdio.h>

int main(void) {
    double price_of_A = 100.00;
    double price_of_B = 37.00;
    int quantity_of_A = 8;
    int quantity_of_b = 6;

    printf("th average price for a single product is = %lf\n",
           ((price_of_A * quantity_of_A + price_of_B * quantity_of_b) / (quantity_of_b + quantity_of_A)));


    return 0;
}
