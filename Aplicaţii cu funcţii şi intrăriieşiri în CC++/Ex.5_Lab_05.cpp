#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float serieR(float a, float b);
float paralelR(float a, float b);
float serieC(float a, float b);
float paralelC(float a, float b);

int main()
{
    float r1,r2,c1, c2, sr, pr,sc,pc;
    printf("capacitate 1=");
    scanf("%f", &c1);
    printf("capacitate 2=");
    scanf("%f", &c2);
    printf("rezistenta 1=");
    scanf("%f", &r1);
    printf("rezistenta 2=");
    scanf("%f", &r2);
    sc = serieC(c1, c2);
    pc = paralelC(c1, c2);
    sr = serieR(r1, r2);
    pr = paralelR(r1, r2);
    printf("capacitate serie este: %-6.3f", sc);
    printf("\ncapacitate paralel este: %-6.3f", pc);
    printf("\nrezistenta serie este: %-6.3f", sr);
    printf("\nrezistenta paralel este: %-6.3f", pr);
}

float serieR(float a, float b)
{
    return a + b;
}

float paralelR(float a, float b)
{
    return (a * b) / (a + b);
}

float paralelC(float a, float b)
{
    return a + b;
}

float serieC(float a, float b)
{
    return (a * b) / (a + b);
}