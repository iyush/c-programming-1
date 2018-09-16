/*
    JTSK-320111
    a2_p6.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x,y;
    char line[10];
    //input and assignments to x and y
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &x);
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &y);

    //declaration of pointers and assignments of adresses to those pointers
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("ptr_one=%p\n", ptr_one);
    printf("ptr_two=%p\n", ptr_two);
    printf("ptr_three=%p\n", ptr_three);
    return 0;
}