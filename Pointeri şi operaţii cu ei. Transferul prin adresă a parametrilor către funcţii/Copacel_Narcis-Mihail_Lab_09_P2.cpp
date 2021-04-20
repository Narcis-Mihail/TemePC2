// Copacel_Narcis-Mihail_Lab_09_P2.cpp 
/*Sã se scrie o aplicaþie C/C++ în care se genereazã aleator 20 de numere întregi cu valori mai mici
decât 50 (Folositi srand(), rand() si operatorul %). Sã se scrie o funcþie care eliminã din tabloul
unidimensional creat numerele impare. Funcþia va utiliza pointeri. Afiºati în main() tabloul iniþial ºi
cel obþinut dupã eliminarea elementelor impare.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define MAX 20

int* getRandom(int* v);
void afisare(int v[],int n);
void nrimp(int* v,int &n);

int main()
{
    int v[MAX],n=MAX;
    getRandom(v);
    afisare(v,n);
    nrimp(v, n);
    afisare(v, n);

}

int* getRandom(int* v) {
    static int r[MAX];//must be static
    int i;
    /* set the seed */
    srand((int)time(NULL));
    for (i = 0; i < MAX; i++)
    {
        v[i] = rand() % 50 + 1;//generate random numbers
       
    }
    return r;
}

void afisare(int v[],int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << v[i]<<" ";
    cout << endl;
}

void nrimp(int* v,int &n)
{
    int i,j,ok;
   
    do {
        ok = 0;
        for(i=0;i<n;i++)
        if (v[i] % 2 != 0)
        {
            for (j = i; j < n - 1; j++)
                v[j] = v[j + 1];
            n--;
            ok = 1;
        }
    } while (ok==1);

  
}