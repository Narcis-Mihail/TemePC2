// Copacel_Narcis-Mihail_Lab_07_P8.cpp 
/*Calcula�i produsul a dou� numere �ntregi folosind num�rul corespunz�tor de adun�ri.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, i,p=0;
	printf("Introduceti doua numere intregi: ");
		scanf("%d %d", &a, &b);
	for (i = 1; i <= b; i++)
		p += a;
	printf("Produsul  celor doua numere este egal cu: %d", p);

}

