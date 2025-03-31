//
// Created by royivri on 3/31/25.
//

#include <stdbool.h>
#include <stdio.h>
/**
 * @brief  this func will be my implementation of the strcat method
 *

 * @param   src char*
 * @param   dest char*- needs to be big enough for both of the strings ,else *UB*
 *
 * @return char* end_of_dest
 */
char* my_strcat(char*  src  ,char* dest) {
    char* p_dest = dest;
    char* p_src = src;
    bool encounterd_null_terminator = false;

    while (*p_dest != '\0') {
    p_dest++;
    }
    *p_dest=' ';
    while (*p_src != '\0') {
        *p_dest++ = *p_src++;
    }
    *p_dest='\0';


    return p_dest;




}






int main() {

    char str1[]="hello world";
    char str2[40]="hello ";
    printf("%s\n", my_strcat(str1,str2));
    printf("%s\n", str1);


    return 0;
}