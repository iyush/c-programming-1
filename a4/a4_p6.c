/*
    JTSK-320111
    a4_p6.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/


#include <stdio.h>

/*
    @brief This is a function that calculates sum of element indexed 2 and element indexed 5 in the list.
    @param list[] for the list of numbers.
    @param n meaning the row spaces in the array.
    @return returns sum if there exists both rows 2 and 5 else it return -111.
*/
double sum25(double list[], int n){
    if (n<=5){
        return -111;
    }else{
        return (list[2] + list[5]);
    }
}

int main(){
    int n;
    char line[100];
    double result;

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    if (n>20){                                      //Array must not contain more than 20 elements
        printf("More than 20 is not allowed");
        return -1;
    }

    double list[n];
    for (int i =0 ; i<n; i++){                      //Inserting values into the array.
        double tempvalue;
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%lf", &tempvalue);
        list[i] = tempvalue;
    }

    result = sum25(list, n);                                    //Error handling incase -111 is returned by the function.
    if (result == -111){
        printf("One or both positions are invalid\n");
    }else{
        printf("sum=%lf\n",result);
    }
}