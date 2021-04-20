#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<malloc.h>
#include<string.h>
char* v;
int main() 
{
    int N, n;
    char* s[100];
    printf("Introduceti numarul de siruri: ");
    scanf("%d", &N);
    while (N)
    {
        v = (char*)malloc(N * sizeof(int));
        scanf("%s", v);
        (s + N) = _strdup(v);
        if (s[N] % 2 == 0);
        printf("%d\n", *(s + N));
        N--;
    }
}