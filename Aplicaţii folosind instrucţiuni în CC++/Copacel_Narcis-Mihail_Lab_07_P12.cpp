// Copacel_Narcis-Mihail_Lab_07_P12.cpp
/*Sã se citeascã un numãr întreg n de la tastaturã.
 Se citesc apoi numere reale, pânã când suma lor depãºeºte valoarea lui n.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n,k=0;
    float x, sum = 0;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &n);

    while (sum <= n)
    {
        scanf("%f", &x);
        sum += x;
        k++;
    }
    printf("Suma este egala cu: %.2f.\nAu fost introduse %d numere reale", sum,k);
}
