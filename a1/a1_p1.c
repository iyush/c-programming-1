/*
    JTSK-320111
    a1_p1.c
    Aayush Sharma Acharya
    asharmaach@jacobs-university.de
*/

/* 
    Here we are assigning the varible result a calculation. However the calculation is done between integers and not the doubles/floats, so the answer returned is returned in terms of integers. In line 13, (3 + 1 ) equals to 4 and if we divide that by 5, we get 0 as per the C compiler while we would be naturally expecting 0.8. When we later print the integer, we do get it as a double because we stated to print it as a double explicitly (in line 14), so we get 0.000000000
*/

#include <stdio.h>

int main(){
    float result;   //Initializing the result of our calculation
    //result = ( 3 + 1 ) / 5;
    /*
    We can fix the problem by calculating result by using floats instead of integers.
    */
    result = (3.0 + 1.0 ) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}

