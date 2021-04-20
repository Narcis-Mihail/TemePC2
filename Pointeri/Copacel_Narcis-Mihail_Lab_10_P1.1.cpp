// Copacel_Narcis-Mihail_Lab_10_P1.1.cpp 
/* Scrieþi un program pentru determinarea valorii medii a elementelor pozitive/negative dintr-un tablou unidimensional.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 30

int main()
{
	float  v[max], ma, sum = 0;
	float* p = v;
	int i, n;
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	printf("Introduceti elemente pozitive/negative in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%f", (p+i));
	}
	for (i = 0; i < n; i++)
		sum += *(p+i);

	ma = (float)sum / n;
	printf("Valoarea medie a elementelor pozitive/negative este: %.2f", ma);

}
