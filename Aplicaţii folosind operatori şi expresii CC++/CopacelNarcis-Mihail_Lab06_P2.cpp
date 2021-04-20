// Ex.2_Lab_06.cpp 
//Copacel Narcis-Mihail
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	double p;
	printf("Da-ti cate o valoare pentru fiecare latura:");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b >= c && a + c >= b && b + c >= a)
	{
		p = double(a + b + c) / 2;
		
		printf("Aria triunghiului este egala cu: %.2f", sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	else
		printf("Cele trei laturi nu formeaza un triunghi");


}
