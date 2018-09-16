/*
	JTSK-320111
	a2_p3.c
	Aayush Sharma Acharya
	a.sharmaacharya@jacobs-university.de
*/
#include <stdio.h>

int main(){
	int weeks,days,hours;
	char line[100];
	printf("Enter weeks: ");
	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&weeks);

	printf("Enter days: ");
	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&days);

	printf("Enter hours: ");
	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&hours);

	printf("The total number of hours is %d\n", (weeks * 7 * 24) + (days * 24) + hours);
	return 0;
}
