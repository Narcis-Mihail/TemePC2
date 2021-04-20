// Copacel_Narcis-Mihail_Lab_09_P1.cpp 
/*S� se scrie un program C/C++ care cite�te elementele a doua tablouri unidimensionale de numere
�ntregi �i afi�eaz� produsul scalar al acestora.Se va folosi o functie care preia elementele de la
tastatur� �i o alt� func�ie, care calculeaz� produsul scalar.Ambele vor utiliza pointeri.Citirea
num�rului de elemente ale tabloului �i afi�area rezultatului se va face �n func�ia main().*/

#include <iostream>
using namespace std;
#define MAX 100
void citire(int* v, int n);
int prodScalar(int* v1, int* v2, int n);
void main(void)
{
    int n, v1[MAX], v2[MAX];
    cout << "Introduceti dimensiunea vectorilor: ";
    cin >> n;
    if (n >= MAX)
    {
        cout << "Dimensiune invalida\n";
        return 0;
    }
    cout << "Introduceti elementele primului vector\n";
    citire(v1, n);
    cout << "Introduceti elementele vectorului doi\n";
    citire(v2, n);
    cout << "\n\nProdusul scalar al celor doi vectori este: " << prodScalar(v1, v2, n) << endl;
}
void citire(int* v, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "\tElementul " << i + 1 << ": ";
        cin >> *(v + i);
    }
}
int prodScalar(int* v1, int* v2, int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += *(v1 + i) * *(v2 + i);
    return s;
}
