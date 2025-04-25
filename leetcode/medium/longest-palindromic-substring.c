#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestPalindrome(char *s) {
    char *p1 = s;
    if (strlen(s) == 1)return s;
    char *p2 =s+1;
    int index = 0;
    int max = 1;
    int temp_max=0;
    char *r1 ,*r2 ,*r1_temp,*r2_temp;
    while (*p1 != '\0') {
        while (*p2 != '\0') {
            if (*p1 == *p2) { //same char
                r1_temp = p1;
                r2_temp = p2;
                while (p1<p2) {
                    if (*p1==*p2) { //same char in a palindrom check
                        temp_max++;
                        if ((p1+1) == (p2-1) || (p1+1) > (p2-1)  ) { //if the pointers are at the same location OR the pointers will pass each other
                            if (temp_max > max) {
                                r1 = r1_temp;
                                r2 = r2_temp;
                            }
                            break;
                        }
                        p1++;
                        p2--;
                        continue;
                    }else { //not same char in palindrom check
                        break;
                    }

                }
                index++;
                p1=s+index+1;
                p2=p1+1;
            }else {// not the same char
                index++;
                p1=s+index+1;
                p2 = p1+1;
            }
        }

        p1++;
        p2=p1+1;

    }/// end big while


    char* str = malloc(strlen(s) *sizeof(char));
    for (int i = 0; r1<r2; ++i) {
        str[i] = *r1;
        r1++;

        if (r1+1==r2) {
            str[i+1] = '\0';
        }
    }
    return str;
}


int main() {
    char s[] = "babad";
    printf("%s\n", longestPalindrome(s));



}
