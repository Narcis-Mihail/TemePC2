// Ex.9_Lab_06.cpp
//Copacel Narcis-Mihail

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14 

int main()
{
	int a, b;
	float A;
	printf("Introduceti doua valori intregi:");
	scanf("%d %d", &a, &b);
	if (a == b)
	{
		A = PI * float(a);
		printf("Aria cercului este egala cu: %f ", A);

	}
	else
	{
		A = float(a * b) / 2;
		printf("Aria triunghiului dreptunghic este egala cu: %f", A);
	}

}
