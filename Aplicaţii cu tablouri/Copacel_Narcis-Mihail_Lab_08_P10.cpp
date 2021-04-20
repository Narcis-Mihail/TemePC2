// Copacel_Narcis-Mihail_Lab_08_P10.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 20

void creare(int v[], int n);
int main()
{
	int n, i, v[max];
	
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	printf("Introduceti valori intregi in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}

	creare(v, n);
}
void creare(int v[], int n)
{
	int i, nrpoz = 0, w[max];
	for (i = 0; i < n; i++)
		if (v[i] > 0)
			nrpoz++;
	for (i = 0; i < n; i++)
		w[i] = v[i] % nrpoz;

	printf("Tabloul construit este: \n");
		for (i = 0; i < n; i++)
		{
			printf("%d ", w[i]);
		}

}