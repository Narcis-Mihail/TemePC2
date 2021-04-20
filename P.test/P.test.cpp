#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 20
float functie(int x, int y[MAX]);

int main()
{
	int n,i, v[MAX],ok=0;
	float medie;
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	if (n > MAX || n<1)
	{
		printf("Valoare invalida!!!");
		return 0;
	}
	
	printf("Introduceti valori in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	
	medie = functie(n, v);

	printf("Media valorilor calculate este : %.2f\n", medie);

	printf("Valorile mai mari decat media sunt: \n");
	for (i = 0; i < n; i++)
	{
		if ((float)v[i] > medie)
		{
			printf(" %d", v[i]);
			ok = 1;
		}
	
	}
	if (!ok)
		printf("Nu exista.");

}

float functie(int x, int y[MAX])
{
	float sump=0, sumimp=0;
	for (int i = 0; i < x; i++)
		if (y[i] % 2 == 0)
			sump += y[i];
		else
			sumimp += y[i];

	return (float)(sump + sumimp) / 2;

}