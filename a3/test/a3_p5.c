/*
    JTSK-320111
    a3_p5.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char line[10];
    int n;

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    for(int i=0; i>=n;){                                            //check if n<0
        printf("Input is invalid, reenter value\n");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &n);
    }

    for (int i = 1; i <= n ; i++){
        if (i==1){
            printf("%d day = %d hours\n", i, i*24);             // 1 day = 24 hours
        }else{
            printf("%d days = %d hours\n", i, i*24);            // n days = n*24 hours
        }
    }
}