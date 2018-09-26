/*
    JTSK-320111
    a4_p8.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

//not finished

#include <stdio.h>
#include <string.h>
int main(){
    char one[100];
    char two[100];
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    printf("length1=%lu\n", strlen(one)-1);
    printf("length1=%lu\n", strlen(two)-1);
    printf("concatenation=%s\n", strcat(one, two));

    char third[100];
    strcpy(third, two);
    printf("copy=%s\n",third);

    int compare = strcmp(two,one);
    if(compare < 0){
        printf("One is bigger than two\n");
    } else if (compare > 0){
        printf("one is smaller than two\n");
    }else{
        printf("One is equal to two\n");
    }}

    char c;
    scanf(" %c", &c);

    int index = 0;
    for(int i=0; i<(strlen(one)-1); i++){       //manually check each item of the list
        if(c == two[i]){
            printf("position=%d\n", i);
            index++;
            break;
        }
    }

    if(index ==0){                              //check if the pattern in the text
        printf("The character is not in the string\n");
    }






}