#include <stdio.h>

int rect_area(int length, int width);
int main( void ){
    int a,b;
    a = rect_area(5,7);
    b = rect_area(3,4);
    printf("Area of first rectangle is %d\n", a);
    printf("Area of second rectangle is %d\n", b);
}

int rect_area(int length, int width){
    int area;
    area = length * width;
    return area;
}
