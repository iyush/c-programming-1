/*
    JTSK-320111
    a3_p4.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char line[10];
    int n=-1, i=1;
    while (n<=0){                                               //loop until valid n is detected
        printf("Enter a positive and non-zero integer: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &n);
    }

    while (i <= n){
        if (i==1){
            printf("%d day = %d hours\n", i, i*24);             // 1 day = 24 hours
        }else{
            printf("%d days = %d hours\n", i, i*24);            // n days = n*24 hours
        }
        i++;
    }

}