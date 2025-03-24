#include <stdio.h>
#include <stddef.h>

#include <limits.h>
typedef unsigned long ul;

int reverse(int arr[],ul sz ){

long temp=0;
ul p1 =0,p2=sz-1;
while (p1<p2)
{
    temp =arr[p1];
    arr[p1]=arr[p2];
    arr[p2]=temp;

    p1++;
    p2--;
}

    return 1; 
}

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

    // for (size_t i = 0; i < len; i++)
    // {
    //     printf("%2d",arr[i]);
    // }
    
    reverse(arr,len);


    for (size_t i = 0; i < len; i++)
    {
        printf(" %2d ",arr[i]);
    }
    return 0;
}
