// Copacel_Narcis-Mihail_Lab_10_P12.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim 20

void citire(int* p, int n);
void afisare(int* p, int n);
void interschimbare(int* p, int n, int l1, int l2);

int main()
{
    int a[dim][dim], * p = &a[0][0], i ,n, l1, l2;
    printf("introduceti dimensiunea matricei patratice ");
    scanf("%d", &n);
    if (n > dim)
    {
        printf("Dimensiunea e prea mare!");
        return 1;
    }
    printf("\n cititi matricea: \n");
    citire(p, n);
    
    printf("Ce linii doriti sa interschimbati?\n");
    printf("Linia: ");
    scanf("%d", &l1);
    printf("cu linia: ");
    scanf("%d", &l2);

    if ((l1 <= n) && (l2 <= n) && (l1 > 0) && (l2 > 0))
    {
        printf("Dupa interschimbarea liniilor %d cu %d matricea arata astfel: \n", l1, l2);
        interschimbare(p, n, l1 - 1, l2 - 1);

        afisare(p, n);
    }
    else
        printf("Cel putin o linie dintre %d si %d nu exista!\n", l1, l2);
    return 0;
}

void citire(int* p, int n)
{
    int i, j;
    for(i=0;i<n;i++)
        for (j = 0; j < n; j++)
        {
            printf("elem [%d][%d]=", i, j);
            scanf("%d", p + i * n + j);
        }
}

void afisare(int* p, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d ", *(p + i * n + j));
        printf("\n");
    }

}


void interschimbare(int* p, int n, int l1, int l2)
{
    int j, aux;
    for (j = 0; j < n; j++)
    {
        aux = *(p + l1 * n + j);
        *(p + l1 * n + j) = *(p + l2 * n + j);
        *(p + l2 * n + j) = aux;

    }
}