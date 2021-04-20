// Copacel_Narcis-Mihail_Lab_08_P2.cpp 
/**/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 20

int main()
{
	int i, n, v[max],min=9999;

	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	printf("Introduceti valori in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++)
		if (min > v[i] && v[i]>=0)
			min = v[i];

	printf("Cel mai mic element pozitiv din tablou este: %d", min);


}
