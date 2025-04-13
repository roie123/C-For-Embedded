#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b) {
    return a > b ? a : b;
}
void reverseString(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}


char* addBinary(char* a, char* b) {


    char *p_a = a;
    char *p_b = b;
    int a_length = strlen(a)-1;
    int b_length = strlen(b)-1;
    int capacity = max(a_length,  b_length) + 1;
    int carry =0;
    char *arr = malloc(capacity+3);

    int k=0;


    while (a_length>=0 || b_length>=0 || carry) {
        int bit_a = (a_length >= 0) ? a[a_length] - '0' : 0;
        int bit_b = (b_length >= 0) ? b[b_length] - '0' : 0;

        int sum = bit_a + bit_b + carry;
        printf("i: %d, j: %d, carry: %d, k: %d\n", a_length, b_length, carry, k);

        arr[k++] = (sum % 2) +'0';


        carry = sum / 2;
        a_length--;
        b_length--;



    }
    arr[k]='\0';


    reverseString(arr);


    return arr;
}


int main() {
char a[] = "11";
char b[] = "1";

printf("%s\n", addBinary(a, b));


}
