#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    char x1[10]="IMPORTANT";
    char name[10] = "";
    char x2[10]="PASSWORD";

    printf("What is your name:");
    
    // scanf("%9s", name);
    
    // scanf("%s", name); //BAD
    // gets(name); //BAD

    fgets(name, 10, stdin);
    
    char *p = strchr(name, '\n');
    if (p != NULL) {
        *p = '\0';
    }
    

    printf("Hello %s!\n", name);

    printf("x1: %s\n", x1);
    printf("x2: %s\n", x2);

    return 0;
}