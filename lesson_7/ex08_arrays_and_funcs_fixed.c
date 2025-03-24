//array decay into pointer:
//"array" argument is actually a pointer argument
//using array as an expression converts it to 
// &array[0]
// (with excetion: sizeof array, &array, ...)

#include <stdio.h>
#include <stdbool.h>

#define LEN(ARR) (sizeof (ARR) / sizeof (*(ARR)))

void print_ints(int arr[], size_t len) {
// void print_ints(int *arr, size_t len) {
    for (size_t i = 0
        ; i < len
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
    int arr4[] = {
        11, 22, 33, 44, 55, 66, 77, 88, 99,
        10, 20, 30, 40, 50, 60, 70, 80, 90,
        19, 29, 39, 49, 59, 69, 79, 89, 34
    };

    //ansi clear screen
    printf("\033[2J\033[H");

    print_ints(arr1, LEN(arr1));
    print_ints(&arr1[0], LEN(arr1));
    print_ints(arr2, LEN(arr2));
    print_ints(arr3, LEN(arr3));

    //start from index 9 and print 9 cells
    print_ints(&arr4[9], 9);
    // print_ints(arr2 + 9, 9);

    return 0;
}