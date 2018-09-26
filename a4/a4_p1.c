/*
    JTSK-320111
    a4_p1.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c){
    int idx;
    /* Loop until end of string */
    for (idx = 0; (str[idx] != c) && (str[idx] != '\0'); ++idx){  //missing curly brackets added later
        /*do nothing*/
    }
    return idx;
}

int main(){
    char line[80];
    while (1){
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurance of 'g' is: %d\n", position(line, 'g'));  //This always printed zero because there was missing brackets in the function "position" and whenever loop started the function exited immediately because of return.
    }
}