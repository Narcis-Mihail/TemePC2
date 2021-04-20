// Ex.7_Lab_06.cpp
//Copacel Narcis-Mihail
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	float a, b,sum,scd,inm,imp;
	printf("Cititi doua valori:");
		scanf("%f %f", &a, &b);
		sum = a + b;
		scd = a - b;
		inm = a * b;
		imp = a / b;
		printf("Suma este egala cu: %f\nScaderea este egala cu: %f\nInmultirea este egala cu: %f\nImpartirea este egala cu: %f\n", sum, scd, inm, imp);
		printf("Suma este egala cu: %d\nScaderea este egala cu: %d\nInmultirea este egala cu: %d\nImpartirea este egala cu: %d\n", int(sum), int(scd), int(inm), int(imp));
		cout << (a < b ? a : b);
}
