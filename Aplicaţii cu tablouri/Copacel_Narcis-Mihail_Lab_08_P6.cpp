// Copacel_Narcis-Mihail_Lab_08_P6.cpp
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define max 10

void nrpar(int v[][max], int n, int m);
void sumimp(int v[][max],int w[][max], int n, int m, int x, int y);
void sum(int v[][max], int w[][max], int n, int m, int x, int y);

int main()
{
	int i, j,x,y, n, m, a[max][max], b[max][max];

	printf("Introduceti dimensiunea tabloului a:");
	scanf("%d %d", &n, &m);

	printf("Introduceti valori in tabloul a:\n");
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("a[%d][%d]=", i+1, j+1);
			scanf("%d", &a[i][j]);
		}

	printf("Introduceti dimensiunea tabloului b:");
	scanf("%d %d", &x, &y);

	printf("Introduceti valori in tabloul b:\n");
	for (i = 0; i < x; i++)
		for (j = 0; j < y; j++)
		{
			printf("b[%d][%d]=", i+1, j+1);
			scanf("%d", &b[i][j]); }
		
	nrpar(a, n, m);
	nrpar(b, x, y);

	sumimp(a, b, n, m, x, y);
	sum(a, b, n, m, x, y);

}


void nrpar(int v[][max], int n, int m)
{
	int ok = 0;
	int i, j;
	printf("\nPozitiile elementelor pare sunt:\n");
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (v[i][j] % 2 == 0)
	{printf("[%d;%d] ", i + 1, j + 1);
	ok = 1; }
	if (!ok)
		printf("Nu exista.");
}

void sumimp(int v[][max], int w[][max], int n, int m, int x, int y)
{
	int i, j,sum=0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (v[i][j] % 2 != 0)
				sum += v[i][j];
	for (i = 0; i < x; i++)
		for (j = 0; j < y; j++)
			if (w[i][j] % 2 != 0)
				sum += w[i][j];

	printf("\nSuma elementelor impare din ambele matrice este: %d", sum);

}

void sum(int v[][max], int w[][max], int n, int m, int x, int y)
{
	int c[max][max],i,j;
	if (n == x && m == y)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				c[i][j] = v[i][j] + w[i][j];
		printf("\nSuma matricelor este egala cu:\n");
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
				printf("%d ", c[i][j]);
			printf("\n");
		}
	}

	else
		printf("Nu se poate efectua suma matricelor.");

	



	

}