#include <stdio.h>
#include <stdbool.h>

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");


    int mat1[3][4] = {
        {10, 20, 30, 40}, //mat1[0]
        {11, 21, 31, 41}, //mat1[1]
        {12, 22, 32, 42}  //mat1[2]
    }; //^-mat1[2][0] ^-mat1[2][3]
    
    const size_t row_count = sizeof mat1/ sizeof mat1[0];
    const size_t col_count = sizeof mat1[0] / sizeof mat1[0][0];
    
    for (size_t row = 0; row < row_count; ++row) {
        for (size_t col = 0; col < col_count; ++col) {
            printf("%2d ", mat1[row][col]);
        }
        puts("");
    }
    puts("");



    return 0;
}