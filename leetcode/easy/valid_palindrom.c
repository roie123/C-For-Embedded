


#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* s) {
    char *p=s;
    char *end_p= s+strlen(s)-1;


    if(strlen(s)<2){
        return true;
    }


    while(p<end_p){
        if(isalnum(*p)==0){
            p++;
            continue;

        }
        if(isalnum(*end_p)==0){
            end_p--;
            continue;

        }

        if(tolower(*p)==tolower(*end_p)){

        }else{
            return false;
        }
        p++;
        end_p--;
    }
    return true;

}


int main(){


}