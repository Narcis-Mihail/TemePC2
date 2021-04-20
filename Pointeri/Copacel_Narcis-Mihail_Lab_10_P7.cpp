// Copacel_Narcis-Mihail_Lab_10_P7.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char sir[255] = "";
    if (argc == 1)
    {
        printf("Introduceti de la linia de comanda siruri de caractere!\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
        strcat(sir, argv[i]);
    printf("Sirul rezultat dupa concatenare este: %s", sir);
    return 0;
}

