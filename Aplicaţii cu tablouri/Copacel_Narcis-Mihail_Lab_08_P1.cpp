// Copacel_Narcis-Mihail_Lab_08_P1.cpp 
/* */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 30

int main()
{
	float  v[max],ma,sum=0;
	int i, n;
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	printf("Introduceti elemente pozitive/negative in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%f", &v[i]);
	}
	for (i = 0; i < n; i++)
		sum += v[i];
	ma = (float)sum / n;
	printf("Valoarea medie a elementelor pozitive/negative este: %.2f",ma);

}
