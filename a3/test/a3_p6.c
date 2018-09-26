/*
    JTSK-320111
    a3_p6.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/
#include <stdio.h>

int main(){
    float x;
    int n;
    char line[100];

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &x);

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    while (n<=0){
        printf("Input is invalid, reenter value\n");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &n);
    }

    for(int i=1;i<=n;i++){
        printf("%f\n", x);
    }
}