#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>


/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.



Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.


Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
 *
 *
 *
 *
 *
 */

int lengthOfLastWord(char *s) {
    char *p = s + strlen(s) - 1;
    int counter = 0;
    if (*p == '\0') {
        return 0;
    }

    while (p > s) {
        if (isalnum(*p)) {
            counter++;
            p++;
            continue;
        }
        if (counter != 0 && !isalnum(*p)) {
            return counter;
        }
        p--;
    }
    return counter;
}


int main() {
    char s[] = "   fly me   to   the moon  ";
    printf("%d\n", lengthOfLastWord(s));
}
