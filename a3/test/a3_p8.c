/*
    JTSK-320111
    a3_p8.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char line[100];
    char ch;
    int n;

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &ch);

    // Program exits if lowercase character is not entered.
    if( ((int)ch < 92) || ((int)ch > 122) ){
        printf("Only lowercase characters allowed, exiting");
        return 1;
    }

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    // Program exits if number is less than 7 or greater than 32.
    if( (n < 7) || (n > 32) ){
        printf("No numbers more than 32 or less than 7 allowed, exiting");
        return 1;
    }

    for(int i=1;i<=n;i++){
        if (i==n){
            printf("%c - %d\n", ch,i);   //No comma at the end of the line
        }else{
            printf("%c - %d, ", ch,i);
        }
    }

}