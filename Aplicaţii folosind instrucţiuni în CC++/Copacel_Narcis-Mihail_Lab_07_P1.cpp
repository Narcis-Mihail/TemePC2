// Copacel_Narcis-Mihail_Lab_07_P1.cpp 
/*Se citesc trei numere de la tastaturã (a, b ºi c). Sã se determine aria dreptunghiului ale cãrui laturi
sunt a ºi b ºi verificaþi dacã diagonala dreptunghiului este egalã cu c. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, A;
	printf("Introduceti de la tastatura lungimea, latura si diagonala dreptunghiului: ");
		scanf("%f %f %f", &a, &b, &c);
	A = a * b;
	printf("Aria dreptunghiului este egala cu: %f\n", A);
	if (sqrt(pow(a, 2) + pow(b, 2)) == c)
		printf("c este diagonala dreptunghiului");
	else
		printf("c nu este diagonala dreptunghiului");
}

