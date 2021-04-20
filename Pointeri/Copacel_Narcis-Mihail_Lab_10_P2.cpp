// Copacel_Narcis-Mihail_Lab_10_P2.cpp 
/*Se consider� doi parametri �ntregi �i al�i doi flotan�i din linia de comand�. S� se
afi�eze suma �i produsul lor.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	float prod = 1.0, suma = 0.0, n;
	int i;
	if (argc == 1) {
		printf("\n\n\tNu ati introdus numerele de adunat !");
		exit(1);
	}//end if
	for (i = 1; i < argc; i++)
	{
		n = atof(argv[i]);
		suma += n;
		prod *= n;
	}//end for
	printf("\nSuma argumentelor din linia de comanda este : %.2f\nProdusul argumentelor din linia de comanda este %.2f", suma,prod);
	return 0;
}//end main