// Copacel_Narcis-Mihail_Lab_09_P6.cpp
/* S� se scrie o aplica�ie C/C++ care cite�te de la tastatur� un �ir de caractere. S� se scrie o func�ie care
afi�eaz� caracterele ce compun �irul �i num�rul de apari�ii ale fiec�ruia, folosind pointeri.*/
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
