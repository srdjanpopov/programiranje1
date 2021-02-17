/*Unos i ispis realnih brojeva*/
#include<stdio.h>

main()
{
	double xx;
	printf("\nUnesite realan broj (npr: 3456.9876): ");

	scanf("%f",&xx);
	printf("\nUneti broj u decimalnom zapisu: %lf", xx);
	printf("\nUneti broj u eksponencijalnom zapisu: %lg", xx);

	return 0;
}
