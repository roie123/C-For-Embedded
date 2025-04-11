/*
*Given two binary strings a and b, return their sum as a binary string.



Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"


Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
 *
 *
 *
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char *a, char *b) {

    char *p_a = a;
    char *p_b = b;
    int capacity =10;
    char *arr = (char*) malloc(capacity * sizeof(char));
    if (arr == NULL) {
        return p_a;
    }
    int counter = 0;
    int sum =0;
    int leftover = 0;
    while (*p_a != '\0' || *p_b != '\0' || leftover != 0) {
        if (*p_a=='\0') {
            if (*p_b == '\0') {
                sum = leftover;
            }else {
                sum =  (*p_b-48)+leftover ;

            }
        }else if (*p_b=='\0') {

            sum = (*p_a-48) +leftover ;
        }
        if (*p_b!='\0' && *p_a!='\0' ) {
            sum = (*p_a-48) + (*p_b-48)+leftover ;

        }

        if (counter+1==capacity) {
            char *temp = (char*) realloc(arr, capacity*2 * sizeof(char));
            if (temp == NULL) {
                return p_a;
            }
            arr = temp;
        }
        if (sum ==0) {

            arr[counter] = '0';
            counter++;
            leftover=0;
        }
        if (sum==1) {
            arr[counter] = '1';
            counter++;
            leftover=0;
        }
        if (sum==2) {
            arr[counter] = '0';
            counter++;
            leftover=1;
        }

        if (*p_a!='\0') p_a++;
        if (*p_b!='\0') p_b++;

    }


    arr[counter] = '\0';
    int len = strlen(arr);
    counter=0;
    while (counter<len) {
        char temp = arr[counter];
        arr[counter] = arr[len-1];
        arr[len-1] = temp;
        counter++;
        len--;

    }


    return arr;
}

int main() {


    char s[] = "1111";
    char s2[] = "1111";
    char *result = addBinary(s, s2);
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("Error: addBinary failed\n");
    }
}
