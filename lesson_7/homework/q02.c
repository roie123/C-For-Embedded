#include <stdio.h>
#include <stddef.h>

#include <limits.h>

int main(int argc, char const *argv[])
{
    

    int max =INT_MIN, arr[10] ={0},len = sizeof arr / sizeof arr[0];


    printf("len : %d \n",len);
    printf("ENTER 10 NUMBERS seperated by enter\n");
    for (size_t i = 0; i < len; i++)
    {
        
        scanf("%d",&arr[i]);
        arr[i]>max ? max=arr[i] : max;
    }
    
    printf("\n MAX = 2 %3d \n",max);
    return 0;
}
