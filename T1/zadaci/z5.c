/* Unos celobrojne vrednosti sa standardnog ulaza, nakon ulazne poruke 
i ispis poruke i vrednosti promenljive na standardni izlaz */
#include<stdio.h>

main()
{
	int aa;
	
	//Tekst namenjen korisniku za identifikaciju unosa
	printf("\nUnesi ceo broj:");
	
	scanf("%d",&aa);
	
	//Tekst izlaza koji kombinuje poruku i vrednost promenljive
	printf("Uneli ste broj %d\n", aa);
	
	return 0;
}
