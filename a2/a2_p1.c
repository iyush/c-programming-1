/*
    JTSK-320111
    a2_p1.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include<stdio.h>

int main()
{
    char line[100];

    double a, b;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &a);
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &b);
    printf("sum of doubles=%lf\n", a+b);
    printf("difference of doubles=%lf\n", a-b);
    printf("square=%lf\n", a*a);

    int c,d;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &c);
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &d);
    printf("sum of integers=%d\n", c+d);
    printf("product of integers=%d\n", c*d);

    char e,f;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &e);
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &f);
    printf("sum of chars=%d\n", e+f);
    printf("product of chars=%d\n", e*f);
    printf("sum of chars=%c\n", e+f);
    printf("product of chars=%c\n", e*f);
    return 0;
}
