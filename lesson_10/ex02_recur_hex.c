/*
2) make a function to print a "hexagon"
   arguments (width of the top & bottom, width of the middle)

    example:
		hex(3, 5)
   output:
		 ***
		*****
		 ***
	
   example:
		hex(3, 7)
   output:
		 ***
		*****
	   *******
	    *****	
		 ***
*/

#include <stdio.h>
#include <stdbool.h>

void print_line(char c, unsigned len, bool has_newline);
void print_hex(unsigned top, unsigned mid);

int main(void) {
    //ansi clear screen
    printf("\033[2J\033[H");
    setbuf(stdout, NULL);
    
    //code
    print_hex(3, 9);

    return 0;
}

void print_line(char c, unsigned len, bool has_newline) {
    while (len--) {
        putchar(c);
    }

    if (has_newline) {
        putchar('\n');
    }
}

void print_hex(unsigned top, unsigned mid) {
    bool is_valid =  top % 2 != 0
                  && mid % 2 != 0
                  && top <= mid;
    
    if ( ! is_valid)
    {
        puts("[Error: top, mid values invalid]");
        return;
    }

    if (top == mid) {
        print_line('*', mid, true);
        return;
    }

    
    unsigned spaces = (mid - top) / 2;

    // print top line
    print_line(' ', spaces, false);
    print_line('*', top, true);

    // print inner hexagon
    print_hex(top + 2, mid);

    // print bottom line
    print_line(' ', spaces, false);
    print_line('*', top, true);
}