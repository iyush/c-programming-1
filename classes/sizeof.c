#include <stdio.h>
#include <string.h>

int main(){
    int a;
    char s[10] = "Hello";
    printf("Size of int %lu\n", sizeof(a));
    printf("Size of float %lu\n", sizeof(float));
    printf("Size of double %lu\n", sizeof(double));
    printf("Size of string %lu\n", strlen(s));
    return 0;
}