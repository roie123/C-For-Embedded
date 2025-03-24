//array decay into pointer:
//"array" argument is actually a pointer argument
//using array as an expression converts it to 
// &array[0]
// (with excetion: sizeof array, &array, ...)

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void print_ints(int arr[]) {
// void print_ints(int *arr) {
    for (size_t i = 0
        ; i < sizeof arr / sizeof arr[0]
        ; i++) 
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

int main(void) {
    int arr1[] = {10, 20};
    int arr2[] = {11, 22, 33, 44};
    int arr3[] = {100, 200, 300, 400};

    //ansi clear screen
    printf("\033[2J\033[H");

    // print_ints(arr1);
    print_ints(&arr1[0]);
    print_ints(arr2);
    print_ints(arr3);

    return 0;
}