/*
    JTSK-320111
    a4_p4.c
    Aayush Sharma Acharya
    a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

/*
    @brief This is a function that prints trapezoid.
    @param n for height.
    @param m for top base and bottom base.
    @param c for characters to print.
    @return does not return anything just prints the trapezoid.
*/


void print_form(int n, int m, char c){
    int j=0;
    for (int i = 0; i<n; i++){
        for (int k = 1; k<= (m+j); k++){
            printf("%c", c);
        }
        printf("\n");
        j++;
    }
}

int main(){
    int n,m;
    char c, line[100];

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &m);

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &c);
    print_form(n,m,c);  //calling the print function
}