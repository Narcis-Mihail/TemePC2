#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[20], b[20];
	float N1, N2,mn;
	printf("Elevul 1: ");
	scanf("%s", a);
	printf("Elevul 2: ");
	scanf("%s", b);
	printf("Nota programare elev 1: ");
	scanf("%f", &N1);
	printf("Nota programare elev 2: ");
		scanf("%f", &N2);
	mn = (N1 + N2) / 2;
	printf("Elevul 1: %20s \nElevul 2: %-20s \nMedia notelor lor: %.2f", a, b, mn);
	
	return 0;
}
