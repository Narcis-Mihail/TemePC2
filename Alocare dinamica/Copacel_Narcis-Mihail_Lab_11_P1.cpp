// Copacel_Narcis-Mihail_Lab_11_P1.cpp 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
    int i,n;
    float *tab = NULL, sum = 0;
    printf("Introduceti dimensiunea tabloului: ");
    scanf("%d", &n);
    if ((tab = (float*)malloc(n * sizeof(int))))
    {
        printf("Introduceti elementele tabloului: ");
        for (i = 0; i < n; i++)
        {
            printf("\nelementul %d: ", i);
            scanf("%f", tab + i);
        }
        for (i = 0; i < n; i++)
            if (*(tab + i) < 0)
                sum += *(tab + i);
        printf("Suma elementelor negative este: %.2f", sum);

    }
    else
        printf("\nAlocare nereusita!");
    if (tab)
        free(tab);
    

}
