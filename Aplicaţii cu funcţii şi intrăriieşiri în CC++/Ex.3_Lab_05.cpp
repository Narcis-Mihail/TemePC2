#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	float c, P;
	printf("Cateta 1 este egala cu:");
	scanf("%d", &a);
	printf("Cateta 2 este egala cu:");
		scanf("%d", &b);

		c = sqrt(pow(a, 2) + pow(b, 2));
		printf("Ipotenuza este egala cu: %f \n", c);

		P = a + b + c;
		printf("Perimetrul triughiului este egal cu: %f", P);
		return 0;

}
