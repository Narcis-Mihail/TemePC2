#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
    char sir1[255], sir2[255], * c1 = sir1, * c2 = sir2;
    int asci1[255], asci2[255], i, s = 0;
    printf("Introduceti doua siruri de caractere\n\tPrimul sir: ");
    scanf("%s", c1);
    printf("\n\tAl doilea sir: ");
    scanf("%s", c2);
    for (i = 0; i < 255; i++)
    {
        asci1[i] = 0;
        asci2[i] = 0;
    }
    i = 0;
    while (*(c1 + i))
    {
        asci1[*(c1 + (i++))] = 1;
    }
    i = 0;
    while (*(c2 + i))
        asci2[*(c2 + (i++))] = 1;
    for (i = 0; i < 255; i++)
        if (asci1[i] && asci2[i])
        {
            asci1[i] = 0;
            asci2[i] = 0;
        }
    for (i = 0; i < 255; i++)
    {
        if (asci1[i])
            s++;
        if (asci2[i])
            s++;
    }
    printf("Numarul de caractere care difera in cele doua siruri este: %d\n", s);
}
