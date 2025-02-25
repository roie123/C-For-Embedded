//
// Created by Roy on 25/02/2025.
//
/*
*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.



Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

 *
 */
#include <stdbool.h>
#include <stdio.h>

int romanToInt(char *s);


int main(void) {
    printf("%d", romanToInt("MCMXCIV"));


    return 0;
}

int romanToInt(char *s) {
    int i = 0;
    int sum = 0;
    while (s[i] != '\0') {
        switch (s[i]) {
            case'I': {
                if (s[i + 1] == 'V' || s[i + 1] == 'X') {
                    sum = sum - 1;
                    i++;

                    break;
                } else {
                    sum = sum + 1;
                }
                i++;
                break;
            }

            case'V': {
                sum = sum + 5;
                i++;
                break;
            }
            case'X': {
                if (s[i + 1] == 'L' || s[i + 1] == 'C') {
                    sum = sum - 10;
                    i++;

                    break;
                } else {
                    sum += 10;
                }
                i++;
                break;
            }
            case'L': {
                sum = sum + 50;
                i++;
                break;
            }
            case'C': {
                if (s[i + 1] == 'D' || s[i + 1] == 'M') {
                    sum = sum - 100;
                    i++;

                    break;
                } else {
                    sum += 100;
                }
                i++;
                break;
            }
            case'D': {
                sum = sum + 500;
                i++;
                break;
            }
            case'M': {
                sum = sum + 1000;
                i++;
                break;
            }
            default: ;
        }
    }


    return sum;
}
