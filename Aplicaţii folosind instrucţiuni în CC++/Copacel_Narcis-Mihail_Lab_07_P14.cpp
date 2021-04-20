// Copacel_Narcis-Mihail_Lab_07_P14.cpp 
/*Scrieþi un program care citeºte n numere întregi de la tastaturã ºi le afiºeazã pe cele divizibile cu 3. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

int main()
{
    int i,x, n, v[MAX];
    printf("Introduceti un numar intreg: ");
    scanf("%d", &n);
    printf("Introduceti %d numere intregi: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("Numerele divizibile cu 3 sunt: \n");
    for (i = 0; i < n; i++)
    {
        if (v[i] % 3 == 0)
            printf(" %d", v[i]);
    }
}
