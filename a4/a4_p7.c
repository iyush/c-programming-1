/*
    JTSK-320111
    a4_p7.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b){
    return(a*b);
}

void productbyref(float a,float b, float *p){
    float m;
    m=a *b;
    *p = m;
    return;
}

void modifybyref(float *a, float *b){
    *a = *a + 3.0;
    *b = *b + 11.0;
    return;
}


int main(){
    float n1,n2,n3;
    char line[100];

    fgets(line, sizeof(line), stdin);               //1st float value
    sscanf(line, "%f", &n1);

    fgets(line, sizeof(line), stdin);               // 2nd float value
    sscanf(line, "%f", &n2);

    fgets(line, sizeof(line), stdin);               // float value for b
    sscanf(line, "%f", &n3);


    printf("product=%f\n", product(n1,n2));
    productbyref(n1,n2,&n3);
    modifybyref(&n1,&n2);
}