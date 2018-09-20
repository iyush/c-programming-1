#include <stdio.h>

int main(){
    int a = 7;
    int *ptr;
    ptr = &a;


    *ptr += 3;

    printf("Address of a: %p\n", ptr);
    printf("Value of a: %d\n", a);
    return 0;
}