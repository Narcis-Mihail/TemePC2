// Copacel_Narcis-Mihail_Lab_10_P1.2.cpp
/*Scrieþi un program pentru determinarea celui mai mic element pozitiv dintr-un tablou
unidimensional.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 20

int main()
{
	int i, n, v[max], min = 9999;
	int* p = v;
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	printf("Introduceti valori in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", (p + i));
	}

	for (i = 0; i < n; i++)
		if (min > *(p + i) && *(p + i) >= 0)
			min = *(p + i);

	printf("Cel mai mic element pozitiv din tablou este: %d", min);
}
