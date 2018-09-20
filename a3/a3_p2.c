/*
    JTSK-320111
    a3_p2.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int n1;
    char ti[10];

    fgets(ti, sizeof(ti), stdin);
    sscanf(ti, "%d", &n1);

    if ((n1 % 2 == 0) && (n1 % 7 == 0)){
        printf("The number is divisible by 2 and 7\n");
    } else {
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}