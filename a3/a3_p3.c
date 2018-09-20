/*
    JTSK-320111
    a3_p3.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char line[10];
    char input;
    int asciiInput;

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", &input);
    asciiInput = (int) input;

    //Comparing with ASCII codes
    if ( (asciiInput >= 48) && (asciiInput <= 57) ){
        printf("%c is a digit\n", input);
    }else if ( ((asciiInput >= 65) && (asciiInput <= 90)) || ((asciiInput >= 97) && (asciiInput <= 122)) ) {
        printf("%c is a letter\n", input);
    }else {
        printf("%c is some other symbol\n", input);
    }
    return 0;
}