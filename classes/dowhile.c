#include <stdio.h>

int main(){
    int n, sum = 0;
    do {
        printf("Enter number (<0 ends it): ");
        scanf("%d", &n);
        sum +=n;
    }while (n >= 0);
    sum -= n;
    printf("The sum is %d\n", sum);
    return 0;
}