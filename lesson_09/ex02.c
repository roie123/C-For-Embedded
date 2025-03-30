#include <stdio.h>

const char *const str = "ABCD";
const char *const str2 = "ABCD";

int main(void) {
    puts("ABCD");
    puts("ABCD");

    putchar("ABCD"[1]);
    putchar('\n');

    printf("%s\n", "ABCD");
    printf("%s\n", "ABCD"  + 1);

    //BAD: prefer "const char *" over "char *"
    char *s1 = "ABCD";

    // this line could fail in runtime
    // because literal strings memory could
    // be read only

    // s1[0] = 'X';
    puts(s1);

    //result could be 0 or 1
    //because string literals with similar values
    //might not share the same address
    printf("%d\n", "ABCD" == "ABCD");

    //guaranteed to be 1 every time
    printf("%d\n", str == str);

    //not guaranteed
    printf("%d\n", str == "ABCD");
    //not guaranteed
    printf("%d\n", str == str2);

    puts("BCD");

    return 0;
}