// Copacel_Narcis-Mihail_Lab_08_P11.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max 20

void inversare(char sir[max]);
void pozpare(char sir[max]);
int main()
{
	char sir[max];
	printf("Introduceti un sir de caractere: ");
	scanf("%s", &sir);

	inversare(sir);
	pozpare(sir);
}

void inversare(char sir[max])
{
	int i, j;
	i = strlen(sir)-1;
	printf("Sirul dupa inversare este: ");
	for (j = i; j >= 0; j--)
		printf("%c", sir[j]);
	printf("\n");
}

void pozpare(char sir[max])
{
	int i;
	printf("Caracterele de pe pozitii pare sunt: \n");
	for (i=0; i< strlen(sir); i++)
		if(i%2==0)
		printf("%c", sir[i]);
	
}