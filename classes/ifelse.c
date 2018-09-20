#include <stdio.h>

int main(){
    int n1,n2;
    char line[10];
    printf("Enter the first number n1\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n1 );
    printf("Enter the second number n2\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n2 );
    if (n1 > n2) {
        printf("First one is bigger\n");
    }else if (n1 < n2) {
        printf("Second one is bigger\n");
    }else{
        printf("Both are equal");
    }
    return 0;
}