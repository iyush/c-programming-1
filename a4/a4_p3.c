/*
    JTSK-320111
    a4_p3.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

/*
    @brief This is a function that changes kg and g to kg and then to pounds.
    @param kg The weight in kilograms.
    @param g The weight in grams.
    @return The weight in pounds.
*/
float to_pounds(int kg, int g){
    float total = kg + ((float) g / 1000);
    return total * 2.2;
}

int main(){
    char line[100];
    int kg,g;

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &kg);

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &g);

    printf("Result of conversion: %f\n", to_pounds(kg,g));
}