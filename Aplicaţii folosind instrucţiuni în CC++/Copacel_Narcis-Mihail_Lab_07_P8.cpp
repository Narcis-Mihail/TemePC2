// Copacel_Narcis-Mihail_Lab_07_P8.cpp 
/*Calculaþi produsul a douã numere întregi folosind numãrul corespunzãtor de adunãri.*/

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

