/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4


used a simple binary search
NOT GPT
non-recursive because of ideological reasons
 */


#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target) {
    int *start = nums;
    int *end = nums + numsSize;
    int *mid = nums + (numsSize / 2);

    while (start < end) {

        mid=start+(end-start)/2;

        if (*mid == target) {
            return nums-mid >0 ? nums-mid : -1 * (nums-mid);
        }

        if (*mid > target) {
            end = mid;
            continue;
        }
        if (*mid < target) {
            start = mid+1;
            continue;
        }
    }


    return start - nums ;
}


int main() {
    int arr[] = {1,3,5,7};
    int target = 5;

    printf("%d\n", searchInsert(arr, 4, target));
}
