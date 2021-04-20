// Copacel_Narcis-Mihail_Lab_08_P9.cpp ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 20
int main()
{
	int n, i, v[max],c=0,ok=0;
	printf("Introduceti dimensiunea tabloului: ");
	scanf("%d", &n);

	printf("Introduceti valori intregi in tablou: \n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	printf("Elementele negative impare din  tablou sunt: \n");
	for (i = 0; i < n; i++)
		if (v[i] % 2 != 0 && v[i] < 0)
		{
			printf("%d ", v[i]);
			c++;
			ok = 1;
		}
	if (!c)
		printf("Nu exista.");
	else
		printf("\nSunt %d numere negative impare in tablou.", c);
}
