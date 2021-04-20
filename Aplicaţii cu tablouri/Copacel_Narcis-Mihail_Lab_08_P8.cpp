// Copacel_Narcis-Mihail_Lab_08_P8.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 20
float med(float v[], int n);
void afisare(float v[], int n, float m);
int main()
{
	int n, i;
	float v[max], media;
	printf("Introduceti dimensiunea tabloului:");
	scanf("%d", &n);

	printf("Introduceti valori reale in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%f", &v[i]);
	}

	media = med(v, n);
	afisare(v, n, media);
}

float med(float v[], int n)
{
	int i;
	float sum = 0.;
	for (i = 0; i < n; i++)
		sum += v[i];

	return (float)sum / n;
}

void afisare(float v[], int n, float m)
{
	int i, ok = 0;
	printf("Valorile mai mari decat media=%f sunt: \n",m);
	for (i = 0; i < n; i++)
		if (v[i] > m)
		{
			printf("%.2f ", v[i]);
			ok = 1;
		}
	if (!ok)
		printf("Nu exista.");
}