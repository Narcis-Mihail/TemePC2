// Copacel_Narcis-Mihail_Lab_07_P9.cpp 
/*S� se scrie un program care determin� c�tul �mp�r�irii a doi �ntregi folosind sc�deri succesive.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, y, c=0;
    printf("Introduceti doua valori: ");
    scanf("%d %d", &x, &y);

    while (x >= y)
    {
        x = x - y;
        c++;
    }
    printf("Catul impartirii este egal cu: %d", c);
}
