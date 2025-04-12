#include <stdio.h>
#include <string.h>

#define N 256

int main(int argc, char const *argv[])
{
    //            01234567890123
    char s1[N] = "Hello, World!";
    char s2[N] = "0123456789ABCDEFG";

    //copy 'World' from s1 into s2
    strncpy(s2, s1+7, 5);
    //strncpy does not add \0 at the end
    s2[5] = '\0';
    puts(s2);

    return 0;
}
