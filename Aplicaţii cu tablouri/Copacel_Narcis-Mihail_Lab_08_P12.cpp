// Copacel_Narcis-Mihail_Lab_08_P12.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 20

void citire(int m, int n, int v[][max]);
void suma1(int m, int v[][max]);
void suma2(int m, int v[][max],int c);

int main()
{
	int n, m,v[max][max],c;
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d %d", &m, &n);
	citire(m, n, v);

	if (m == n)
		suma1(m, v);
	else
	{
		printf("Introduceti coloana de pe care se face suma: ");
		scanf("%d", &c);
		suma2(m, v, c);
	}

}

void citire(int m, int n, int v[][max])
{
	int i, j;
	printf("Introduceti valori in tablou:\n");
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("v[%d][%d]=", i, j);
			scanf("%d", &v[i][j]);
		}
}

void suma1(int m, int v[][max])
{
	int i,j,sum=0;
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			if (i + j == m - 1)
				sum += v[i][j];
	printf("Suma elementelor de pe coloana secundara este egala cu: %d", sum);
}

void suma2(int m, int v[][max], int c)
{
	int sum = 0,i;
	for (i = 0; i < m; i++)
		sum += v[i][c];

	printf("Suma elementelor de pe coloana %d este egala cu: %d", c, sum);
}