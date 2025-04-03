//
// Created by royivri on 4/1/25.
//


#include <stdint.h>
#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle) {
    if (*needle == '\0') return 0;
  char *p_needle = needle;
    char *p_haystack = haystack;
    char *last_match = haystack;
    while (*p_haystack != '\0' && *p_needle != '\0') {


        if (p_needle==needle) {
            last_match = p_haystack;

        }
        if (*p_haystack == *p_needle) {
            if (p_needle==needle) {
                last_match = p_haystack;

            }
            p_haystack++;
            p_needle++;
            continue;
        } else {

            p_needle = needle;
            p_haystack=last_match+1;
            continue;
        }
    }
    return *p_needle=='\0'? last_match-haystack :-1;



}


int main() {
    char str1[] = "mississippi";
    char str2[] = "issip";

    printf("%d", strStr(str1, str2));

    return 0;
}
