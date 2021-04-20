// Ex.4_Lab_06.cpp 
//Copacel Narcis-Mihail

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

unsigned short int v[32];
unsigned convert(unsigned int a)
{
    unsigned short int aux[32], poz = -1;
    while (a > 0)
    {
        aux[++poz] = a % 2;
        a /= 2;
    }
    for (int i = 0; i <= poz; i++)
    {
        v[poz - i] = aux[i];
    }
    return poz;
}
int main()
{
    unsigned int a, dim, i;
    printf("Introduceti o voloare intreaga fara semn: ");
    scanf("%d", &a);
    printf("Numarul introdus este: %d (baza 10), ", a);
    dim = convert(a);
    for (i = 0; i <= dim; i++)
    {
        printf("%d", v[i]);
    }
   printf(" (baza 2), ") ;
    printf("%o (baza 8), %x (baza 16)", a, a);
}