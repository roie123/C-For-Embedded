#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    int arr[] = {10, 20, 30};
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    puts("");

    memset(arr, 0x00, sizeof arr);
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}