// Ex.8_Lab_06.cpp
//Copacel Narcis-Mihail

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>

int main()
{
    char s[20];
    printf("introduceti un cuvant: ");
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        s[i] -= 32;
    }
    printf("\n %s", s);
    return 0;
}