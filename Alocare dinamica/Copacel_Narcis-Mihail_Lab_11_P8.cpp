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
#include<iostream>
using  namespace  std;
#include<math.h>
long  int*  v;
long  float*  s;
void  main()
{
        int  N,  i;
        cout  <<  "Introduceti  dimensiunea  tabloului:";
        cin  >>  N;
        if  (N  <=  0)
        {
                cout  <<  "Dimensiune  invalida!";
                return;
        }
        v  =  (long  int*)malloc(N  *  sizeof(long  int));
        if  (v  ==  NULL)
        {
                cout  <<  "\n  Alocare  esuata!";
                return;
        }
        else
        {
                for  (i  =  0;  i  <  N;  i++)
                {
                        cin  >>  v[i];
                }
                s  =  (long  float*)malloc(N  *  sizeof(long  float));
                for  (i  =  0;  i  <  N;  i++)
                {
                        s[i]  =  float(sqrt(v[i]));
                }
                cout  <<  "\n  Vectorul  initial  este:  ";
                for  (i  =  0;  i  <  N;  i++)
                {
                        cout  <<  "\n  v["  <<  i  <<  "]=  "  <<  *(v  +  i);
                }
                cout  <<  "\n  Vectorul  final  este:  ";
                for  (i  =  0;  i  <  N;  i++)
                {
                        cout  <<  "\n  s["  <<  i  <<  "]=  "  <<  *(s  +  i);
                }
        }
        if  (v)
                free(v);
        if  (s)
                free(s);
}