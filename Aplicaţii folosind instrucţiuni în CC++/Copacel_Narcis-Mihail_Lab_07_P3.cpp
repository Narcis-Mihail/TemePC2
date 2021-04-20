// Copacel_Narcis-Mihail_Lab_07_P3.cpp 
/*Sã se scrie un program care calculeaza pow(a,n), unde n este citit de la consolã (a se defineºte în program).*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, n;
	a = 2;
	printf("Da-ti o valoare puterii: ");
		scanf("%d", &n);
	printf("Numarul %d la puterea %d este egal cu: %.0f", a, n, pow(a,n));

}
