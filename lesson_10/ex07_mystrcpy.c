#include <stdio.h>
#include <stdbool.h>

char* my_strcpy(char *, const char *);

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");

    //code

    return 0;
}

char* my_strcpy_v1(char *dest, const char *src) {
    char *pdest = dest;
    char *psrc = src;

    while (*psrc) { // *psrc != '\0'
        *pdest = *psrc;
        ++psrc;
        ++pdest;
    }

    pdest[1] = '\0'; // *(pdest+1) = '\0';
    //OR:
    // ++pdest;
    // *pdest = '\0';

    return dest;
}

char* my_strcpy_v2(char *dest, const char *src) {
    char *pdest = dest;
    char *psrc = src;

    while (*psrc) {
        *pdest++ = *psrc++;
    }
    
    //postfix ++ already placed pdest in the cell where
    //the null terminator should be
    //
    *pdest = '\0';

    return dest;
}

char* my_strcpy_v3(char *dest, const char *src) {
    char *pdest = dest;

    while (*src) {
        *pdest++ = *src++;
    }
    *pdest = '\0';
    return dest;
}

char* my_strcpy_v4(char *dest, const char *src) {
    size_t i;
    for (i = 0; src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return dest;
}