// Ex1. Lab_06.cpp 
//Copacel Narcis-Mihail
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main()
{
	float x, a, b, c, d, f;
	printf("Da-ti o valoare variabilei x:");
	scanf("%f", &x);
	printf("Da-ti o valuare pentru fiecare coeficient");
	scanf("%f %f %f %f", &a, &b, &c, &d);

	f = a * pow(x, 3) + b * pow(x, 2) + c * x + d;

	printf("Valoarea polinomului de grad 3 pentru x= %f este %.2f ", x, f);



}
