// Copacel_Narcis-Mihail_Lab_09_P3.cpp
/**/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;
int i;
#define MAX 20

float media(float v[], int n);
void copiere(float* v, float* w, int n,float medie, int &m);
void afisare(float v[], int n);
void citire(float* v, int n);

int main()
{
	float v[MAX], w[MAX],medie;
	int n,m=0;

	printf("Introduceti dimensiunea tabloului:");
	scanf("%d", &n);
	citire(v, n);
	medie = media(v, n);
	copiere(v, w, n, medie, m);
	afisare(w, m);

}

void citire(float* v, int n)
{
	printf("Introduceti valori in tablou:");
	for (i = 0; i < n; i++)
		scanf("%f", &v[i]);
}
void afisare(float v[], int n)
{
	for (i = 0; i < n; i++)
		printf("%.2f ",v[i]);
}

float media(float v[], int n)
{
	float suma=0;
	int c=0;
	for (i = 0; i < n; i++)
	{
		suma += v[i];
		c++;
	}
	return (float)suma / c;

}

void copiere(float* v, float* w, int n, float medie, int &m)
{
	
	for (i = 0; i < n; i++)
	{
		if (v[i] > medie)
		{
			w[m] = v[i];
			m++;
		}
	}
}