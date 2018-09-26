/*
    JTSK-320111
    a4_p5.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

/*
    @brief This is a function that calculates the sum of list items.
    @param list[] for the list of numbers.
    @param n meaning the row spaces in the array.
    @return sum of the list items.
*/
float sum(float list[], int n){
    float sum=0;
    for (int i = 0; i <= n; i ++){
        sum = sum + list[i];
    }
    return sum;
}

/*
    @brief This is a function that calculates the average of the list.
    @param list[] for the list of numbers.
    @param n meaning the row spaces in the array.
    @return average using the sum function.
*/

float average(float list[], int n){
    float avr=0;
    avr = sum(list, n);
    return avr/n;
}

int main(){
    int checkRow;
    float number[10];
    char line[100];
    for (int i = 0; i<10;i++){
        float tempvalue = 0;
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f", &tempvalue);
        if(tempvalue == -99.0){                     //breaking the loop if the number value of -99.0
            break;
        }
        number[i] = tempvalue;
        checkRow++;
    }

    printf("The sum of the numbers in the list is %f\n", sum(number, checkRow) );
    printf("The average of the numbers in the list is %f\n", average(number, checkRow));
}