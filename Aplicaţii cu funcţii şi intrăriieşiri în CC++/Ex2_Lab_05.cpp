#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float serie(float a, float b);
float paralel(float a, float b);

int main()
{
    float c1, c2, s, p;
    printf("\n capacitate 1=");
    scanf("%f", &c1);
    printf("\n capacitate 2=");
    scanf("%f", &c2);
    s = serie(c1, c2);
    p = paralel(c1, c2);
    printf("\n capacitate serie este:\n%-6.4f", s);
    printf("\n capacitate paralel este:\n%-6.4f", p);
}

float paralel(float a, float b)
{
    return a + b;
}

float serie(float a, float b)
{
    return (a * b) / (a + b);
}