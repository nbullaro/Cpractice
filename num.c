#include <stdio.h>

int main()
{

/*
	//int double float
	int dogs =6;
	
	//floation pt
	//precision - how much var can hold
	//double - dbl precision

	printf("%i %f %f\n", 1,1111.1111,1111.1111F); //pass in float..becomes double
*/
	printf("how many dogs do u have?: ");
	double dogs;
	
	scanf("%lf",&dogs);

	printf("%f\n%e\n%g\n",dogs,dogs, dogs);


	
	return 0;
}
/*Conversion Characters
%f-Decimal notation
%e - scientific notation
%g - computer decides
*/
