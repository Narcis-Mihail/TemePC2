#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    float x;
    scanf("%d %d", &a, &b);
    if (a != 0)
    {
        x = float(-b) /float(a);
        printf("x este egal cu: %.1f", x);
    }
    else
        printf("Ecuatia nu are solutii reale.");
    return 0;
}
