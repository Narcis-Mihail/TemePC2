// Copacel_Narcis-Mihail_Lab_10_P3.cpp 
/*Scrieþi o aplicaþie care citeºte de la tastaturã un ºir de caractere cu lungimea mai mare
decât 7. Folosiþi un pointer pt. a accesa ºi afiºa caracterele de pe poziþiile 1, 3, 5 ºi 7.*/

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
