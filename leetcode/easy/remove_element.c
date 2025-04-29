#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Comparison function for qsort
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Assume this is implemented elsewhere
int removeElement(int *nums, int numsSize, int val);

int main() {
    int nums[] = {3, 2, 2, 3};
    int val = 3;
    int expectedNums[] = {2, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int expectedLength = sizeof(expectedNums) / sizeof(expectedNums[0]);

    int k = removeElement(nums, numsSize, val);

    assert(k == expectedLength);

    // Sort the first k elements of nums
    qsort(nums, k, sizeof(int), cmp);

    for (int i = 0; i < expectedLength; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    printf("Test passed!\n");
    return 0;
}
int removeElement(int* nums, int numsSize, int val) {
    int i = 0, j = 0;
    int sum=0;
    while (i < numsSize) {
        if (nums[i] == val) { //nums[i] is value
            if (i==numsSize-1) { //if we are at the last index
                break;
            }else {
                j=i+1;
                while (j<numsSize) {
                    if (nums[j]!=val) {//nums[j] is not value
                        nums[i]=nums[j];
                        nums[j]=val;
                        i++;
                        continue;
                    }else {
                        j++;
                    }
                }
                i++;
            }
        }else {// nums[i] is not value
            i++;

        }
    }
i=0;
while(i<numsSize) {
    if (nums[i]!=val) {
        sum++;
        i++;
    }else {
        i++;
    }
}
return sum;

}