// Copacel_Narcis-Mihail_Lab_07_P15.cpp 
/*S� se scrie un program care cite�te de la tastatur� un caracter, pe care �l afi�eaz� pe n r�nduri, c�te n caractere pe un r�nd. */

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
