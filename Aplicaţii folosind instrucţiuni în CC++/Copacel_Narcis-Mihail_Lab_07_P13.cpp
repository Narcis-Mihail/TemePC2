// Copacel_Narcis-Mihail_Lab_07_P13.cpp 
/*Sã se scrie un program care determinã cmmmc a douã numere citite de la tastaturã.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, x, y;
    printf("Introduceti doua numere: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;

    }
    printf("Cmmmc-ul celor doua numere este: %d", (a * b) / x);
}
