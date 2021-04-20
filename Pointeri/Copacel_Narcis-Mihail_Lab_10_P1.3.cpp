// Copacel_Narcis-Mihail_Lab_10_P1.3.cpp 
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define max 10
void ordonare(int *v);

int main()
{
	int i, v[max];

	printf("Introduceti 10 valori intregi in sir:\n");
	for (i = 0; i < max; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}

	ordonare(v);

}

void ordonare(int *v)
{
	int i, ok, aux;
	do
	{
		ok = 0;
		for (int i = 0; i < max - 1; i++)
			if (*(v + i) > *(v + i + 1))
			{
				aux = *(v+i);
				*(v + i) = *(v + i + 1);
				*(v + i + 1) = aux;
				ok = 1;
			}

	} while (ok == 1);

	printf("Elementele ordonate crescator sunt: \n");
	for (i = 0; i < max; i++)
		printf("%d ", *(v + i));

}