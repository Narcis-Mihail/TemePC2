// Copacel_Narcis-Mihail_Lab_08_P7.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 3

int main()
{
	float v[max][max];
	int i, j;
	float sum1 = 0, sum2 = 0, sum3 = 0,aux;
	printf("Introduceti valori in tablou: ");
	for (i = 0; i < max; i++)
		for (j = 0; j < max; j++)
		{
			printf("v[%d][%d]=", i, j);
			scanf("%f", &v[i][j]);
		}
	for (i = 0; i < max; i++)
	{
		sum1 = v[i][0];
		sum2 = v[i][1];
		sum3 = v[i][2];
	}

	if (sum2 < sum1)
	{
		for (i = 0; i < max; i++)
		{
			aux = v[i][0];
			v[i][0] = v[i][1];
			v[i][1] = aux;
		}
	}
	else
	{
		if (sum3 < sum1)
		{
			for (i = 0; i < max; i++)
			{
				aux = v[i][0];
				v[i][0] = v[i][2];
				v[i][2] = aux;
			}
		}
	}
	if (sum3 < sum2)
	{
		for (i = 0; i < max; i++)
		{
			aux = v[i][2];
			v[i][2] = v[i][1];
			v[i][1] = aux;
		}
	}

	for (i = 0; i < max; i++)
	{
		for (j = 0; j < max; j++)

			printf("%.2f ", v[i][j]);
		printf("\n");
	}
		
}
