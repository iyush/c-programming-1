/*
    JTSK-320111
    a2_p2.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include<stdio.h>

int main(){
    char line[100];

    char a;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &a);

    printf("character=%c\n", a);
    printf("decimal=%d\n", a);
    printf("octal=%o\n", a);
    printf("hexadecimal=%x\n", a);

    return 0;
}