#include <stdio.h>
//counts dozens

/*
test 
test
*/
int main()
{
	printf("the number of eggs for the day:\n ");
	int eggs;
	scanf("%i", &eggs);
	double dozen = (double) eggs / 12;
	printf("You have %f dozen eggs\n ",dozen);
}
