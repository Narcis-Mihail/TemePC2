// Copacel_Narcis-Mihail_Lab_07_P11.cpp
/*Sã se scrie un program care citeºte de la tastaturã n numere întregi. Afiºaþi toate numerele impare din ºir.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, x;
    printf("Introduceti o valoare intreaga: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\nIntroduceti o valoare:");
        scanf("%d", &x);
        if (x % 2 != 0)
            printf("Numarul %d este impar.\n", x);
        else
            printf("Numarul %d nu este impar.\n", x);
    }
}
