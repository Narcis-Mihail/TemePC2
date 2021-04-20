#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float v1, v2, t, d=100;
	printf("Viteza primei masini este: ");
		scanf("%f", &v1);
		printf("Viteza masini a doua este: ");
		scanf("%f", &v2);
		t = d / (v1 + v2);
		t = t * 60;
		printf("Masinile se intalnesc dupa: %.0f minute", t );

		return 0;

}