// Copacel_Narcis-Mihail_Lab_07_P10.cpp 
/* S� se scrie un program care determin� num�rul de cifre care compun un num�r �ntreg citit de la tastatur�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, c=0, n;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &x);
    n = x;
    while (x != 0)
    {
        x = x / 10;
        c++;
    }
    printf("Numarul %d contine %d cifre.", n, c);
}
