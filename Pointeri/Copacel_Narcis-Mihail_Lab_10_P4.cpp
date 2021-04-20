// Copacel_Narcis-Mihail_Lab_10_P4.cpp 
/*Citiþi de la tastaturã elementele a 2 matrici de valori întregi. Scrieþi o funcþie care
primeºte ca parametri pointerii la cele 2 matrici ºi returneazã un pointer la matricea
sumã. Rezultatul însumãrii matricelor va fi afiºat în funcþia main. Afiºaþi elementele
de pe diagoanala secundarã a matricii sumã, folosind acelaºi pointer.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define DIM1 10
#define DIM2 10
int* suma(int* p1, int* p2, int* ps, int n, int m);
void citire(int *p, int m, int n);
void afisare(int* p, int m, int n);

int main()
{
	int v[DIM1][DIM2], w[DIM1][DIM2], s[DIM1][DIM2], m1, n1, m2, n2, * p1, * p2, * ps;
	p1 = &v[0][0];
	p2 = &w[0][0];
	ps = &s[0][0];
	printf("\nPrima matrice: ");
	printf("\nIntroduceti nr de linii si de coloane:");
	scanf("%d %d", &m1, &n1);

	printf("\nA doua matrice: ");
	printf("\nIntroduceti nr de linii si de coloane:");
	scanf("%d %d", &m2, &n2);

	printf("\nCititi prima matrice:");
	citire(p1, m1, n1);
	printf("\nCititi a doua matrice:");
	citire(p2, m2, n2);

	if ((m1 == m2) && (n1 == n2))
	{
		ps = suma(p1, p2, ps, m1, n1);
		printf("\nAfisati matricea suma: \n");
		afisare(ps, m1, n1);

		if (m1 == n1)
		{
			printf("\n Elementele de pe diagonala secundara a matricii suma sunt:\n");
			for (int i = 0; i < m1; i++)
				printf("%4d", *(ps + i * m1 + (m1 - i - 1)));
			printf("\n");
		}
		else printf("Matricea suma nu este patratica, deci nu are diagonala secundara\n");
	}
	else
		printf("\n Matricile nu au aceleasi dimensiuni, nu pute calcula matricea suma!");
	
}

int* suma(int* p1, int* p2, int* ps, int n, int m)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			*(ps + i * n + j) = *(p1 + i * n + j) + *(p2 + i * n + j);
	return ps;
}
void citire(int* p, int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			printf("v[%d][%d]=", i, j);
			scanf("%d", p+i*n+j);
		}
}

void afisare(int* p, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%4d ", *(p + i * j + n));
		printf("\n");
	}
}
