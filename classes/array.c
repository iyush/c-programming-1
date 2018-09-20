#include <stdio.h>

int main(){
    char name[3] = "Hello World";
    printf("%s\n", name);
    name[5] = '\0';
    printf("%s\n",name);
    return 0;
}