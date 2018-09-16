/*
    JTSK-320111
    a2_p5.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/
#include<stdio.h>

int main(){
    //declaring, reading input and printing the value of a.
    int a;
    char line[10];
    printf("Enter the value of variable a: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &a);
    printf("The value of a =%d\n", a);

    //declaring, initializing ptr_a by pointing it to a and printing the address.
    int *ptr_a;
    ptr_a = &a;
    printf("variable a lies in the address (ptr_a) = %p\n", ptr_a);

    //increasing the value of the varible by using its pointer and printing it along with the address.
    *ptr_a += 5;
    printf("Increasing the value of a through pointers, we get %d\n", *ptr_a);
    printf("The address remains the same which is %p\n", ptr_a);

    return 0;
}