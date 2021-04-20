#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float serie(float a, float b);
float paralel(float a, float b);

int main()
{
    float r1, r2, s, p;
    printf("\n Rezistenta 1=");
    scanf("%f", &r1);
    printf("\n Rezistenta 2=");
    scanf("%f", &r2);
    s = serie(r1, r2);
    p = paralel(r1, r2);
    printf("\n Rezistenta serie este:\n%-6.3f", s);
    printf("\n Rezistenta paralel este:\n%-6.3f", p);
}

float serie(float a, float b)
{
    return a + b;
}

float paralel(float a, float b)
{
    return (a * b) / (a + b);
}
