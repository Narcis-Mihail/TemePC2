// Copacel_Narcis-Mihail_Lab_07_P9.cpp 
/*Sã se scrie un program care determinã câtul împãrþirii a doi întregi folosind scãderi succesive.*/

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
