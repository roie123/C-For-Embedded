#include <stdio.h>
#include <stdbool.h>

size_t my_strlen_v1(const char *s);
size_t my_strlen_v2(const char *s);
size_t my_strlen_v3(const char *s);
size_t my_strlen_v4(const char *s);
size_t my_strlen_v5(const char *s);
size_t my_strlen_v6(const char *s);
size_t my_strlen_v7(const char *s);
size_t my_strlen_v8(const char *s);


int main(void) {
    // int x = 123;
    // int *p1 = &x;
    // const int *p2 = p1; // OK
    // int *p3 = p2; // ERROR

    //ansi clear screen
    printf("\033[2J\033[H");
    
    const char s1[] = "Hello";
    char s2[] = "Goodbye";
    
    printf("%zu\n", my_strlen_v8("ABCD"));
    printf("%zu\n", my_strlen_v8(s1));
    printf("%zu\n", my_strlen_v8(s2));

    return 0;
}

size_t my_strlen_v1(const char *s) {
    size_t count = 0;

    for (size_t i = 0; s[i] != '\0'; ++i) {
        count++;
    }

    return count;
}  


size_t my_strlen_v2(const char *s) {
    size_t i = 0;

    for (; s[i] != '\0'; ++i)
        ;
    
    return i;
}

size_t my_strlen_v3(const char *s) {
    size_t i = 0;

    // while (s[i] != '\0')
    while (s[i] != 0)
        ++i;
    
    return i;
}

size_t my_strlen_v4(const char *s) {
    size_t i = 0;

    while (s[i])
        ++i;
    
    return i;
}

size_t my_strlen_v5(const char *s) {
    size_t count = 0;
    
    for (const char *p = s; *p != '\0'; ++p)
        ++count;
    
    return count;
}

size_t my_strlen_v6(const char *s) {
    size_t count = 0;
    
    // for (; *s != '\0'; ++s)
    //     ++count;

    while (*s != '\0') {
        ++s;
        ++count;
    }
    
    return count;
}

size_t my_strlen_v7(const char *s) {
    size_t count = 0;
    
    while (*s) {
        ++s;
        ++count;
    }
    
    return count;
}

size_t my_strlen_v8(const char *s) {
    size_t count = 0;
    
    while (*s++) {
        ++count;
    }
    
    return count;
}




