/*
    JTSK-320111
    a3_p7.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char line[100];
    char ch;
    int n;

    printf("Enter string 'ch': ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &ch);


    printf("Enter integer 'n': ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    for(int i=0;i<=n;i++){
        if (i==n){
            printf("%c - %d\n", ch,i);   //No comma at the end of the line
        }else if(i==0){                  //First character of the string
            printf("%c,", ch);
        }else {
            printf("%c - %d, ", ch,i);
        }
    }

}