// Copacel_Narcis-Mihail_Lab_07_P13.cpp 
/*S� se scrie un program care determin� cmmmc a dou� numere citite de la tastatur�.*/

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
