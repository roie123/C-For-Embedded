#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool checkSubstring(char *start, char *end,char *to_find) {
   while (start < end) {
       if (*start ==*to_find) {
           return true;
       }
       start++;

   }
    return false;
}
int lengthOfLongestSubstring(char *s) {
    char *p = s;
    char *p2 = s+1;
    int max = 1;
    int temp_max = 0;
    if ((*p + 1) == '\0' || *p == '\0') return 0;
    while (*p != '\0') {
        if (*p2=='\0') {
            temp_max++;
            max= max>temp_max?max:temp_max;
            temp_max = 0;
            p++;
            p2=p+1;
            continue;
        }
        if (*p == *p2 && p2!=s) {
            temp_max++;
            max = max > temp_max ? max : temp_max;
            temp_max = 0;
            p++;

            if (*p2+1 == '\0') {
                return max;
            }else {
                p2=p+1;
            }
        }else {
            if (!checkSubstring(p,p2,p2)) {
                temp_max++;
                p2++;
            }else {
                temp_max++;

                max = max > temp_max ? max : temp_max;
                temp_max = 0;
                p++;

            }



        }






    }
    return max;
}



int main() {
    char s[] = "cdd";

    printf("%d\n", lengthOfLongestSubstring(s));
}
