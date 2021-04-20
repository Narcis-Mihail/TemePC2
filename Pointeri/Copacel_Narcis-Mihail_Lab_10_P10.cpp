// Copacel_Narcis-Mihail_Lab_10_P10.cpp 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 50

void citire(float* p, int n);
void afisare(float* p, int n);
void completare(float* pb, float* pa, int n);
float medie(float* p, int n);

int main()
{
    float a[DIM], * pa = &a[0], b[DIM], * pb = &b[0];
    int i, n;
    printf("\ndati dimensiunea tabloului:");
    scanf("%d", &n);
    if (n > DIM)
    {
        printf("dimensiune prea mare!");
        return 1;
    }
    printf("\ncititi elementele tabloului a:");
    citire(pa, n);
    completare(pb, pa, n);
    printf("\nafisati elementele tabloului b: ");
    afisare(pb, n);
    return 0;
}

void citire(float* p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n dati elementul %d:", i + 1);
        scanf("%f", p + i);
    }
}

void afisare(float* p, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("\t%.2f", *(p + i));
    printf("\n");
}

float medie(float* p, int n)
{
    int i;
    float s = 0;
    for (i = 0;i < n; i++)
        s = s + *(p + i);
    return s / n;
}

void completare(float* pb, float* pa, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(pb + i) = *(pa + i) - medie(pa, n);
}









