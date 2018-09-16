/*
    JTSK-320111
    a1_p3.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/


//include <stdio.h>         //Missing # for include
#include <stdio.h>          //Corrected: added #
int main() {
    //float result;         /∗ The result of the division ∗/               //This is not the proper way to write a comment.
    float result;           /*This is result of the division */           //This is the proper way to write it.


    // int a = 5;
    // int b = 13.5;


    /*
        a and b are both integers and when both the integers divide, the result is also a integer. This result is stored into the "result" variable even though, the "result" variable is declared as a float. Due to this the "result" always returns as 0.0000000

        In order to solve this we must change both the int variable a and b to float variables as done below:
    */

    float a = 5;
    float b = 13.5;

    result = a / b;
    //printf("The result is %d\n", result);                 //Using an integer format specification for a float value is not valid
    printf("The result is %f\n", result);                   //Using a float format specfication for printf.
    return 0;
}