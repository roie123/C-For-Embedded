#include <stddef.h>
#include <stdio.h>

//Define an array with 10 elements, read values into it, and print it



int main(int argc, char const *argv[])
{
    int arr[10] ={0};
    int len = sizeof arr / sizeof arr[0];
    printf("len : %d \n",len);
    printf("ENTER 10 NUMBERS seperated by enter\n");
    for (size_t i = 0; i < len; i++)
    {
        
        scanf("%d",&arr[i]);
    }
    
    for (size_t i = 0; i < len; i++)
    {
        printf("%2d \n",arr[i]);
    }
    
    
    return 0;
}
