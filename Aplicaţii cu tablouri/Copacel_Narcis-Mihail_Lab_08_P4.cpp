// Copacel_Narcis-Mihail_Lab_08_P4.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define max 10
int main()
{
	char par[max]= "parola", tast[max];
	int i,c=0,ok;

	do
	{
		ok = 0;
		printf("\nIntroduceti parola: ");
		scanf("%s", &tast);
		for (i = 1; i < strlen(par); i++)
			if (par[i] == tast[i])
				ok = 0;
			else
			{
				c++;
				ok = 1;
				printf("\nParola incorecta!");
				break;
				
			}

	} while (ok == 1);

	printf("\nParola corecta.\nAti introdus parola gresita de %d ori.", c);
}
