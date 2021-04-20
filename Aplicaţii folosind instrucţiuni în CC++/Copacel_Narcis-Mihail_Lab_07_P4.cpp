// Copacel_Narcis-Mihail_Lab_07_P4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Sã se scrie un program care citeºte de la tastaturã o valoare întreagã ºi calculeazã n! (n-factorial). */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n,i,f=1;
	printf("Introduceti o valoare:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		f = f * i;
	printf("%d! este egal cu: %d", n, f);
}
