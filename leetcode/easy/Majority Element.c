#include <stdio.h>




int majorityElement(int* nums, int numsSize) {
    
int p1=0;
int sum=0;

for (int i = 0; i < numsSize; i++)
{
   
    
    sum=0;
    for (int j = i+1; j < numsSize; j++)
    {
        if (nums[i]==nums[j])
        {
            sum++;
            
        }
        




    }
    
if (sum>=(numsSize/2))
{
    return nums[i];
}
if (i>(numsSize/2))
{
    return nums[i];
}

}

return -1;
    

}
int main(int argc, char const *argv[])
{
    
int arr[3] ={6,5,5};


int element = majorityElement(arr,3);

printf("\n %d \n" , element);
printf("hello");





    return 0;
}


