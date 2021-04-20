// Copacel_Narcis-Mihail_Lab_09_P2.cpp 
/*S� se scrie o aplica�ie C/C++ �n care se genereaz� aleator 20 de numere �ntregi cu valori mai mici
dec�t 50 (Folositi srand(), rand() si operatorul %). S� se scrie o func�ie care elimin� din tabloul
unidimensional creat numerele impare. Func�ia va utiliza pointeri. Afi�ati �n main() tabloul ini�ial �i
cel ob�inut dup� eliminarea elementelor impare.*/

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