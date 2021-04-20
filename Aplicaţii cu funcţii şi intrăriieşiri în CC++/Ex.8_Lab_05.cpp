#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	unsigned int o1, o2, m1, m2;
	float s1, s2;
	printf("Ora plecarii trenului: ");
		scanf("%d", &o1);
	printf("Minutul plecarii trenului: ");
		scanf("%d", &m1);
	printf("Ora la care ajunge trenul: ");
		scanf("%d", &o2);
	printf("Minutul la care ajunge trenul: ");
		scanf("%d", &m2);

		s1 = o1 * 60 + m1;
		s2 = o2 * 60 + m2;

		if(s1>s2)
			{
			printf("Durata calatoriei este: %.2f", (s1 - s2) / 60);
			}
		else
			printf("Durata calatoriei este: %.2f", (s2 - s1) / 60);
		

}
