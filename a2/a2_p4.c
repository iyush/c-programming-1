/*
	JTSK-320111
	a2_p4.c
	Aayush Sharma Acharya
	a.sharmaacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
	float a,b,h;
	char line[10];

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &a);

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &b);

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &h);

	printf("square area=%f\n", a*a);
	printf("rectangle area=%f\n", a*b);
	printf("triangle area=%f\n", a*h/2);
	printf("trapezoid area=%f\n", ((a+b)/2) * h );
	return 0;
}
