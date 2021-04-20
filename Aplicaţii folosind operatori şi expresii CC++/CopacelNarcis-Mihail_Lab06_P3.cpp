#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char a;
    int i;
    printf("Introduceti un caracter: ");
    scanf("%c", &a);
    for (i = 1; i <= sizeof(a) * 8; i++)
    {
        printf("\n Bitul de pe pozitia %d este %d", i, a % 2);
        a = a >> 1;
    }
}