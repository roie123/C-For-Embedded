#include <stdio.h>
#include <stdbool.h>
#include <string.h>


/*
    read words from the user
    add them to a total string
    (seperated by ", ")
    print the final string
    stop when reading the word "stop"
    (do not add "stop" to the string)
*/
int main(void) {
    char word[1024] = "";
    char string[2048] ="";

    //ansi clear screen
    printf("\033[2J\033[H");

    while (true) {
        printf("word:");
        scanf("%1023s", word);
        //fgets(word, 1024, stdin); //reads a line with newline not a word

        if (strcmp(word, "stop") == 0) {
            break;
        }

        strcat(string, word);
        strcat(string, ", ");
    }

    printf("final result:\n");
    printf("%s\n", string);
    //printf(string); // <- DANGEROUS

    return 0;
}

/*
    create your own strcat version
    that returns the end of the string 
    the you concatenated to.asm

    use that version to write a more efficient 
    program (main)
*/