// Copacel_Narcis-Mihail_Lab_09_P6.cpp
/* Sã se scrie o aplicaþie C/C++ care citeºte de la tastaturã un ºir de caractere. Sã se scrie o funcþie care
afiºeazã caracterele ce compun ºirul ºi numãrul de apariþii ale fiecãruia, folosind pointeri.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20

void functie(char* v);

int main()
{
	char sir[MAX];

	printf("Introduceti un sir de carctere: ");
	scanf("%s", &sir);
	functie(sir);

}

void functie(char *v)
{
	int i,j, n,c;
	n = strlen(v);
	printf("Sirul citit este: %s.\n",v);
	for (i = 0; i < n; i++)
	{
		c = 1;
		for (j = i + 1; j < n; j++)
			if (v[i] == v[j])
			{
				for (int k = j; k < n - 1; k++)
					v[k] = v[k + 1];
				n--;
				c++;
			}

		printf("%c apare de %d ori.\n", v[i], c);
	}
}
