#include <stdio.h>
#include <string.h>

#define N 256

int main(int argc, char const *argv[])
{
    //            01234567890123
    char s1[N] = "Hello, World!";
    char s2[N] = "Goodbye, ";
    //   0    1    2    3   4   5   6    7    8   9
    //{ 'G', 'o', 'o', 'd','b','y','e', ',', ' ' '\0', .... }

    size_t len = strlen(s2);
    //copy 'World' from s1 into s2
    memcpy(s2 + len, s1+7, 5);
    //strncpy does not add \0 at the end
    s2[len+5] = '\0';
    //puts(s2);
    printf("[%s]\n", s2);

    return 0;
}
