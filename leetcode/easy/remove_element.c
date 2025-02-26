#include <stdio.h>

int removeElement(int *nums, int numsSize, int val);

int main(void) {
    int arr[8]
            = {
                0, 1, 2, 2, 3, 0, 4, 2
            };
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", removeElement(arr, 8, 2));
    for (int i = 0; i < 8; ++i) {
        printf("%d", arr[i]);
    }
    return 0;
}

int removeElement(int *nums, int numsSize, int val) {
    int p = 0;
    int q = numsSize - 1;
    int temp = 0;

    if (numsSize==0) {
        return 0;
    }
    while ((p != q && p < q) &&(q>0 && p<numsSize) ) {

        if (nums[p] == val && nums[q] == val) {
            q--;
            continue;
        }
        if (nums[p] == val && nums[q] != val) {
            nums[p] = nums[q];
            p++;
            q--;
            continue;
        }

        p++;
    }

if (p==0) {
    return 0;
}
    return (p+1);
}
