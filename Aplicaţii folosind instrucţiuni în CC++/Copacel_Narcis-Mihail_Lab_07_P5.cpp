// Copacel_Narcis-Mihail_Lab_07_P5.cpp 
/* S� se scrie un program care :
- determin� cel mai mare num�r prim mai mic dec�t num�rul dat
- determin� toate numerele prime mai mici dec�t num�rul dat.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int  n, i, max = -9999;
	bool ok;
	printf("Introduceti o valoare:");
		scanf("%d", &n);
	printf("Numerele prime mai mici decat %d sunt:\n", n);
	for (i = 2; i < n; i++)
	{
		ok = true;
			for (int j = 2; j <= i / 2; j++)
				if (i % j == 0)
					ok = false;
		if (ok == true)
		{
			printf(" %d", i);
			if (i > max)
				max = i;
		}

	}
	printf("\n Cel mai mare numar prim mai mic decat %d este: %d", n, max);
}
