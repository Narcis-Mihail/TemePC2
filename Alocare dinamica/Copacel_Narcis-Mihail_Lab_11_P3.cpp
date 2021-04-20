// Copacel_Narcis-Mihail_Lab_11_P3.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

#define DIM1 20
#define DIM1 20

void citire(int* p, int m, int n);
void afisare(int* p, int m, int n);
void suma(int* p1, int* p2, int* ps, int m, int n);

int main()
{ 
    int m, n, * p1, * p2, * ps;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &m);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &n);
    
    if (!(p1 = (int*)malloc(m * n * sizeof(int))))
    {
        printf("Alocare nereusita!");
        return 1;
    }

    if (!(p2 = (int*)malloc(m * n * sizeof(int))))
    {
        printf("Alocare nereusita!");
        return 1;
    }

    if (!(ps = (int*)malloc(m * n * sizeof(int))))
    {
        printf("Alocare nereusita!");
        return 1;
    }

    printf("cititi prima matrice:\n");
    citire(p1, m, n);
    printf("cititi a doua matrice:\n");
    citire(p2, m, n);

    printf("afisati prima matrice:\n");
    afisare(p1, m, n);
    printf("afisati a doua matrice:\n");
    afisare(p2, m, n);

    suma(p1, p2, ps, m, n);
    printf("\nafisati matricea suma: \n");
    afisare(ps, m, n);

    if (p1)
        free(p1);
    if (p2)
        free(p2);
    if (ps)
        free(ps);

    return 0;
}

void citire(int* p, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            printf("elementul [%d][%d]: ", i, j);
            scanf("%d", p + i * n + j);
        }
}

void afisare(int* p, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", *(p + i * n + j));
        printf("\n");

    }
}

void suma(int* p1, int* p2, int* ps, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            *(ps + i * n + j) = *(p1 + i * n + j) + *(p2 + i * n + j);
}