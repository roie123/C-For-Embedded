#include <stdbool.h>


bool isPalindrome(int x) {

    int i;
    long temp = 0;
    int checked = x;
    while(x>=1){
        temp=(temp + (x%10))*10;
        x=x/10;

    }


    if((temp/10)==checked){
        return true;
    }
    else{
        return false;
    }

}
