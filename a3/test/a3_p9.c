/*
    JTSK-320111
    a3_p9.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char c;
    int n;
    double sum=0;
    char line[100];

    printf("Enter s for sum, t for fahrenheit conversion, p to print all list and any other key to find average: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &c);
    printf("How many table rows?: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    //store temperatures into array
    double temperatures[n];
    for (int i=0;i<n;i++){
        double tempvalue;
        printf("Value: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%lf", &tempvalue);
        temperatures[i] = tempvalue;
    }

    switch (c){
        case 's':
            //calculate sum
            for (int i=0;i<n;i++){
                sum += temperatures[i];
            }
            printf("Sum is: %lf\n", sum);
            break;

        case 'p':
            //list of all temperatures
            printf("The list of all temperatures\n");
            for(int i=0;i<n;i++){
                printf("%lf\n", temperatures[i]);
            }
            break;

        case 't':
            //list of all temperatures in fahrenheit
            printf("The list of all temperatures in fahrenheit\n");
            for(int i=0;i<n;i++){
                printf("%lf\n", (temperatures[i]*9/5)+32 );
            }
            break;

        default:
            //print average of temperatures
            for(int i=0;i<n;i++){
                sum+=temperatures[i];
            }
            printf("Average: %lf", sum/n);
    }
}
