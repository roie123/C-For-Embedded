#include <stdio.h>

int removeElement(int *nums, int numsSize, int val);

int main(void) {
    int arr[8]
            = {
                4, 3, 1, 3, 1, 2, 3, 7
            };
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr[i]);
    }
    printf(" the return %d\n", removeElement(arr, 8, 3));
    for (int i = 0; i < 8; ++i) {
        printf("%d", arr[i]);
    }
    return 0;
}

int removeElement(int *nums, int numsSize, int val) {
    int p = 0;
    int q = (numsSize - 1);
    int sum = 0;

    while (p != q || p < q) {
        printf("\n P:[%d]%d  Q:(%d)%d \n",p,nums[p],q,nums[q]);
        if (nums[p] == val) {
            if (nums[q]==val) {
                q--;
                continue;
            }else {
                nums[p]=nums[q];
                nums[q]=val;
                p++;
                q--;
                continue;
            }


        }else {
            if (nums[q]==val) {
                q--;
                p++;
                continue;
            }else {
                p++;
                q--;

            }
        }
    }

    return sum;
}
