// Copacel_Narcis-Mihail_Lab_07_P2.cpp 
/*Sã se scrie un program care verificã dacã un numãr citit de la tastaturã este pãtrat perfect.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;

    printf("Da-ti o valoare:");
    scanf("%d", &x);

    y = sqrt(float(x));

    if (x==pow(y,2))
        printf("Numarul %d este patrat perfect.", x);
    else
        printf("Numarul %d nu este patrat perfect.", x);
}
