//Ex.5 Laborator 06
//Copacel Narcis-Mihail

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x,c=0;
	printf("Introduceti o valoare intreaga:");
		scanf("%d", &x);
		while (x != 0)
		{
			if (x % 2 == 0)
			{
				c++;
				x = x / 2;
			}
			else
				x = x / 2;

		}
	printf("Numarul de zerouri din reprezentarea binara este:%d", c);


}