#include <stdio.h>



int majorityElement(int *nums, int numsSize) {
    if (numsSize <= 2) {
        return nums[0];
    }

    int *curr = nums+1;
    int* prev = nums;
    int m=1;
    int value= *nums;
while (curr<nums+numsSize) {
    if (m==0) {
       value = *curr;
    }
    if (*curr == value && curr!=nums) {
        m++;
        curr++;
        prev++;
    }else {
        m--;
        curr++;
        prev++;
    }


}



    return value;
}


int main() {
    int nums[4] = {7,7,6};

    printf("%d\n", majorityElement(nums, 4));
}
