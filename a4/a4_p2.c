/*
    JTSK-320111
    a4_p2.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>
/*
    @brief This is a function that changes centimeter to kilometer.
    @param cm The length in centimeters.
    @return The length in kilometers.
*/
float convert(int cm){
    return ((float) cm) / 100000 ;
}

int main(){
    char line[10];
    int length;

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &length);

    printf("Result of conversion: %f\n", convert(length));

}