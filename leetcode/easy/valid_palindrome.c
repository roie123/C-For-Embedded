#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool isPalindrome(char *s);
bool is_alphanumerical_and_lower(char s);
int main(void) {
char* ptr = "abcd3!!!2";
char* ptr2 = "abc1!ba   ";


isPalindrome(ptr);
isPalindrome(ptr2);




    return 0;
}

bool isPalindrome(char* s) {
    //141 -172
    int i =0;
    // printf("%c", strlen(s));
    int j =strlen(s);
    while (i!=strlen(s)){


        if( (is_alphanumerical_and_lower(s[i])) && (is_alphanumerical_and_lower(s[j]))) {
            printf("%c",s[i]);

        }
        i++;
        j++;


    }

    return true;
}


bool is_alphanumerical_and_lower(char s) {
    if(tolower(s)>96 && tolower(s)<123) {
        return true;
    }
    else return false;
}