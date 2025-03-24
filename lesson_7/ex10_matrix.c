#include <stdio.h>
#include <stdbool.h>

//pros: standard solution
//cons: needs to know lower dimensions
//
void print_mat_v1(int mat[][4], size_t rows) {
// void print_mat_v1(int (*mat)[4], size_t rows) {
    const size_t col_count = sizeof mat[0]/sizeof mat[0][0];

    for (size_t row = 0; row < rows; ++row) {
        for (size_t col = 0; col < col_count; ++col) {
            printf("%2d ", mat[row][col]);
        }
        puts("");
    }
    puts("");
}

//pros: row size and column size need not be known
//cons: maybe non-standard?
//cons: needs to calculate 1D index from 2D 
//
void print_mat_v2(int *mat, size_t rows, size_t cols) {

    for (size_t row = 0; row < rows; ++row) {
        for (size_t col = 0; col < cols; ++col) {
            printf("%2d ", mat[row * cols + col]);
        }
        puts("");
    }
    puts("");
}

//C99 VMT (not in C++)
void print_mat_v3(size_t rows, size_t cols, int (*pmat)[rows][cols]) {

    for (size_t row = 0; row < rows; ++row) {
        for (size_t col = 0; col < cols; ++col) {
            printf("%2d ", (*pmat)[row, col]);
        }
        puts("");
    }
    puts("");
}

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");


    int mat1[][4] = {
        {10, 20, 30, 40},
        {11, 21, 31, 41}, //1, 2
        {12, 22, 32, 42} 
    }; 
    
    // arr[1 * 4 + 2] ==> arr[6]

    const size_t row_count = sizeof mat1/ sizeof mat1[0];
    const size_t col_count = sizeof mat1[0] / sizeof mat1[0][0];
    
    print_mat_v1(mat1, row_count);
    print_mat_v2(mat1, row_count, col_count);
    print_mat_v3(row_count, col_count, &mat1);

    return 0;
}