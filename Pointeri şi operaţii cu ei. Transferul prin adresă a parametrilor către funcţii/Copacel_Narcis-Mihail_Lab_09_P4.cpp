#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
    char sir[225], * c = sir, sirClean[255], * cC = sirClean;
    int asci[255], i, k = 0;
    printf("Introduceti un sir de caractere: ");
    scanf("%s", c);
    for (i = 0; i < 255; i++)
        asci[i] = 0;
    i = 0;
    while (*(c + i) != 0)
    {
        if (!asci[*(c + i)])
        {
            asci[*(c + i)] = 1;
            *(cC + (k++)) = *(c + i);
        }
        i++;
    }
    *(cC + k) = 0;
    printf("%s", sirClean);
}