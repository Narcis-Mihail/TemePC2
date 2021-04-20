// Copacel_Narcis-Mihail_Lab_11_P8.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

#define DIM 20
int suma(int* p, int n);
void afisare(int* p, int n);


int main()
{
	int n, i, j, *p,sum=0;

	printf("Introduceti dimensiunea matricei: ");
	scanf("%d", &n);
	if(!(p=(int*)malloc(n*n*sizeof(int))))
	{
		printf("Alocare nereusita!");
		return 1;
	}

	for(i=0;i<n;i++)
		for (j = 0; j < n; j++)
		{
			printf("elementul [%d][%d]: ", i, j);
			scanf("%d", p + i * n + j);
		}
	sum = suma(p, n);

	printf("\nMatricea introdusa este: \n");
	afisare(p, n);
	printf("\nSuma elementelor pozitive de sub diagonala principala este egala cu: %d ", sum);

}

void afisare(int* p, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", *(p + i * n + j));
		printf("\n");

	}
}

int suma(int* p, int n)
{
	int i, j,sum =0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i >= j && p + i * n + j > 0 && *(p + i * n + j)%2==0)
				sum += *(p + i * n + j);

	return sum;
}