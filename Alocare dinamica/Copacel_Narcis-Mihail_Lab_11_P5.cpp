// Copacel_Narcis-Mihail_Lab_11_P5.cpp 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define DIM 100

float sum(float* p, int n);
float calcul(float* tab, float xmed, int n, int p);

int main()
{
	int N, i;
	float* tab;
	float M;
	float valmed, mn = 0;
	printf("dati numarul de elemente: ");
		scanf("%d", &N);
	if (N > DIM)
	{
		printf("dimensiune prea mare");
		return 1;
	}
	
	if (tab = (float*)malloc(N * sizeof(float)))
	{
		for (i = 0; i < N; i++)
		{
			printf("\ndati elementul %d: ", i);
			scanf("%f", tab + i);
		}

		printf("Au fost introduse valorile: ");
		for (i = 0; i < N; i++)
			printf("%.2f\t", *(tab + i));

		valmed = sum(tab, N) / N;
		printf("\nMedia celor N elemente este: %.2f", valmed);

		printf("\nMomentele de ordin 1, 2 si 3 au valorile:");
		for (i = 1; i <= 3; i++)
		{
			M = calcul(tab, valmed, N, i);
			printf("\n M%d: %.2f", i, M);
		}
	}
	else
	{
		printf("\nalocare nereusita!");
		return 1;
	}
	if (tab)
		free(tab);

}

float sum(float* p, int n)
{
	float s = 0;
	int i;
	for (i = 0; i < n; i++)
		s = s + *(p + i);
	return s;
}

float calcul(float* tab, float xmed, int n, int p)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += pow(tab[i] - xmed, p);
	}
	return sum / n;
}