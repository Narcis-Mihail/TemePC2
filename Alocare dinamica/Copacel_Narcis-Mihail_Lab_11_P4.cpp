// Copacel_Narcis-Mihail_Lab_11_P4.cpp 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    int i, n;
    char** tab;
    printf("\n dati nr de siruri: ");
    scanf("%d", &n);

    if (tab = new char* [n])
    {
        for (i = 0; i < n; i++)
        {
            tab[i] = new char[20];
            printf("\n dati sirul %d: ", i + 1);
            scanf("%s", tab[i]);
        }

        printf("\nS-a alocat dinamic spatiu pentru urmatoarele siruri: \n");
        for (i = 0; i < n; i++)
            printf("%s ", tab[i]);
    }
    else
    {
        printf("alocare nereusita!");
        return 1;
    }
    for (i = 0; i < n; i++)
        if (tab[i] != NULL)
            delete[]tab[i];
    if (tab != NULL)
        delete[]tab;
}
