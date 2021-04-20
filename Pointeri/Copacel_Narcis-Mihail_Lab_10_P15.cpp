// Copacel_Narcis-Mihail_Lab_10_P13.cpp 
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define dim 10
int comp1(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}
int main()
{
    int a[dim], i, n;
    float b[dim];

    printf("Introduceti dimensiunea tabloului:");
    scanf("%d", &n);
    

    if (n<1 || n>dim)
    {
        printf("Dimensiune invalida!");
        return 1;
    }
    printf("Introduceti valori in vectorul 1:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }

    printf("Introduceti valori in vectorul 1:\n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d]=", i);
        scanf("%f", &b[i]);
    }

    qsort(a, n, sizeof(int), comp1);
    qsort(b, n, sizeof(float), comp2);

    printf("Tabloul 1 ordonat crescator este: \n");
    for (i = 0; i < n; i++)
        printf("a[%d]= %d\n", i, a[i]);

    printf("\nTabloul 1 ordonat crescator este: \n");
    for (i = 0; i < n; i++)
        printf("a[%d]= %.2f\n", i, b[i]);

}
