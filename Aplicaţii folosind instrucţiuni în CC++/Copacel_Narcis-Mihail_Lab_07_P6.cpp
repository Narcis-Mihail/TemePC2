// Copacel_Narcis-Mihail_Lab_07_P6.cpp 
/*S� se scrie un program care determin� cel mai mare divizor comun a doi �ntregi.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("Introduceti doua numere:");
	scanf("%d %d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("Cel mai mare divizor comun este egal cu: %d", a);

}
