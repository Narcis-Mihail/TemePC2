// Copacel_Narcis-Mihail_Lab_10_P3.cpp 
/*Scrie�i o aplica�ie care cite�te de la tastatur� un �ir de caractere cu lungimea mai mare
dec�t 7. Folosi�i un pointer pt. a accesa �i afi�a caracterele de pe pozi�iile 1, 3, 5 �i 7.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 10
int main()
{
	char v[max];
	int i;

	printf("Introduceti un sir de caractere cu lungimea mai mare decat 7: ");
	scanf("%s", &v);

	char* p = v;
	printf("Caracterele de pe pozitiile 1,3,5 si 7 sunt:\n");
	for (i = 1; i <= 7; i = i + 2)
		printf("%c", *(p + i));

}
