/*
    JTSK-320111
    a1_p2.c
    Aayush Sharma Acharya
    asharmaach@jacobs-university.de
*/

/*
    Contrary to what is written in the question, the code does not print anything, it throws back a compile error stating the printf statement does not have any arguments.
*/

#include <stdio.h>

int main(){
    int result;                                 //Integer Decleration
    result = (2+7) * 9 / 3;                     //Integer operation

    //printf("The result is %d\n");         //This is incorrect because this printf expects a matching int argument which is not given.

    printf("The result is %d\n", result);   //This is the corrected solution.
    return 0;
}