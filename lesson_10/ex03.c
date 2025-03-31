#include <stdio.h>
#include <stdbool.h>

void print_ints(int arr[], size_t len);
//add val to each cell in arr
void increase_ints(int arr[], size_t len, int val);

int main(void) {
    //              0   1   2   3   4   5   6   7   8    9     10
    int nums1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};//end
    const size_t len = sizeof nums1/ sizeof *nums1;
    //ansi clear screen
    printf("\033[2J\033[H");

    print_ints(nums1, len);
    
    increase_ints(nums1, len, 1);
    print_ints(nums1, len);

    //increase from index 4 to end by value 2
    // increase_ints(&nums1[4], len - 4, 2);
       increase_ints(nums1 + 4, len - 4, 2);
    print_ints(nums1, len);

    //increase [3..7] by value 5
    increase_ints(&nums1[3], 7 - 3 + 1, 5);
    print_ints(nums1, len);

    int *start = nums1; // &nums1[0];
    int *end = nums1 + len; // &nums1[10]
    size_t len2 = end - start;
    
    //if we compute start-end, store it in ptrdiff_t
    //instead of storing it in size_t
    //(beacuse it will be negative)

    printf("len = %zu; len2 = %zu\n", len, len2);



    return 0;
}

void print_ints(int arr[], size_t len) {
    for (size_t i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
}

//add val to each cell in arr
void increase_ints(int arr[], size_t len, int val) {
    for (size_t i = 0 ; i < len; ++i) {
        arr[i] += val;
    }
}