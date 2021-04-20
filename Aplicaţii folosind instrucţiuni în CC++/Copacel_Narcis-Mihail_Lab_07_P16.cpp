// Copacel_Narcis-Mihail_Lab_07_P16.cpp 
/*Sã se scrie o aplicaþie C/C++ în care se introduc de la tastaturã numere întregi, pânã ce utilizatorul
apasã tasta <Esc>. Sã se determine ºi sã se afiºeze media numerelor impare pozitive.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
    int x,suma=0,c=0;
    int key;

    do
    {
        printf("\nIntroduceti un numar: ");
        scanf("%d", &x);
        if (x % 2 != 0 && x>=0)
        {
            suma += x;
            c++;
        }
        printf("Continuati ?");
            key =_getch();

    } while (key != 27 );

    printf("\nMedia numerelor impare pozitive este egala cu: %d.", suma / c);

}
