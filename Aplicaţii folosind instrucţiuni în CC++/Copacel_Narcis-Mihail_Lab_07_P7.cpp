// Copacel_Narcis-Mihail_Lab_07_P7.cpp 
/*S� se scrie un program care determin� to�i divizorii unui num�r.*/

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

