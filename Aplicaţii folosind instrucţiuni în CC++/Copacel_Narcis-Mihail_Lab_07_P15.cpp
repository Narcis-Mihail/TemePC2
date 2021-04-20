// Copacel_Narcis-Mihail_Lab_07_P15.cpp 
/*Sã se scrie un program care citeºte de la tastaturã un caracter, pe care îl afiºeazã pe n rânduri, câte n caractere pe un rând. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char x;
    int i, j;
    unsigned int n;
    printf("Introduceti un caracter: ");
    scanf("%c", &x);
    printf("Introduceti un numar natural: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%c ", x);
        printf("\n");
    }

}
