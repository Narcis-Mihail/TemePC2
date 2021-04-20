#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	int r;
	float Lc, Ac;
	printf("Raza cercului este egala cu: ");
		scanf("%d", &r);

	Lc = 2 * PI * float(r);
	Ac = PI * float(pow(r, 2));
	printf("Lungimea cercului este egala cu: %.3f \nAria cercului este egala cu: %.3f ", Lc, Ac);
	return 0;
}
