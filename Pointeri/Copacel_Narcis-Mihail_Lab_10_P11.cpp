// Copacel_Narcis-Mihail_Lab_10_P11.cpp 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim 20

void citire(int* p, int n);
void afisare(int* p, int n);
int nr_neg(int* p, int n);

int main()
{
	int a[dim][dim], * p = &a[0][0], i, n;
	printf("Introduceti dimensiunea matricei patratice (intre 2 si 20): ");
	scanf("%d", &n);
	if (n > 20 || n < 2)
	{
		printf("Dimensiunea trebuie sa fie cuprinsa intre 2 si 20!");
		return 1;
	}
	printf("cititi matricea:\n");
	citire(p, n);
	printf("\n numarul elementelor negative de deasuprea diagonalei secundare este: %d\n",nr_neg(p, n));
	return 0;

}


void citire(int* p, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			printf("elem [%d][%d]=", i, j);
			scanf("%d", p + i * n + j);
		}
}

void afisare(int* p, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{for (j = 0; j < n; j++)
		
			printf("%7d", *(p + i * n + j));
	printf("\n");
		}
}

int nr_neg(int* p, int n)
{
	int nr = 0;
	for (int i = 0; i < n ; i++)
		for (int j = 0; j < n ; j++)
			if (*(p + i * n + j) < 0 && i+j<n-1)
				nr++;
	return nr;
}