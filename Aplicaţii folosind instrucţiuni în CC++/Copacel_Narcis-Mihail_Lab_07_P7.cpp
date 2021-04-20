// Copacel_Narcis-Mihail_Lab_07_P7.cpp 
/*Sã se scrie un program care determinã toþi divizorii unui numãr.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	printf("Introduceti o valoare: ");
		scanf("%d", &x);
	printf("Toti divizori numarului %d sunt:\n", x);
	for (int i = 2; i <= x/2; i++)
		if (x % i == 0)
			printf("%d ", i);

}

