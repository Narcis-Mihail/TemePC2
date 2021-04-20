// Copacel_Narcis-Mihail_Lab_11_P7.cpp 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

void nr_ap(int* tab, int* p1, int* p2);
void ordonare(int* tab, int* p1, int* p2);
void afisare(int* tab, int* p1, int* p2);
int* tab, a[100], b[100], * p1 = &a[0], * p2 = &b[0];

int main()
{
	int i, j;
	int RANGE_MIN = 1;
	int RANGE_MAX = 100;

	srand((unsigned)time(NULL));

	if (tab = (int*)malloc(10000 * sizeof(int)))
	{
		for (i = 0; i < 10000; i++)
			*(tab + i) = (int)rand() * (RANGE_MAX - RANGE_MIN) / RAND_MAX + RANGE_MIN;

		for (j = 0; j < 100; j++)
			*(p1 + j) = 0;

		nr_ap(tab, p1, p2);
		ordonare(tab, p1, p2);
		afisare(tab, p1, p2);
	}
	else
	{
		printf("\n eroare de alocare!");
		return 1;
	}
	if (tab)
		free(tab);
	return 0;
}

void nr_ap(int* tab, int* p1, int* p2)
{
	int i, j;
	for(j=1;j<=100;j++)
		for(i=0;i<10000;i++)
			if (*(tab + i) == j)
			{
				*(p1 + j - 1) += 1;
				*(p2 + j - 1) = j;
			}
}

void ordonare(int* tab, int* p1, int* p2)
{
	int i, j, aux1, aux2;
	for(i=0;i<99;i++)
		for (j = i + 1; j < 100; j++) {
			if (*(p1 + i) < *(p1 + j))
			{
				aux1 = *(p1 + i);
				*(p1 + i) = *(p1 + j);
				*(p1 + j) = aux1;

				aux2 = *(p2 + i);
				*(p2 + i) = *(p2 + j);
				*(p2 + j) = aux2;
			}
		}
}

void afisare(int* tab, int* p1, int* p2)
{
	int j;
	for (j = 0; j < 10; j++)
		printf("\n numarul %d apare de %d ori", *(p2 + j), *(p1 + j));
}