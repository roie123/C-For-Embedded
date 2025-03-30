#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int chars_written;
    int value = 1234;
    printf("Hello%n\n", &chars_written);
    printf("the printing above printed %d chars\n", chars_written);


    printf("%d%n\n", value, &chars_written);
    printf("the printing above printed %d chars\n", chars_written);

    return 0;
}