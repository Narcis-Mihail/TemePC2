// Copacel_Narcis-Mihail_Lab_12_P3.cpp
//

#include <iostream>
using namespace std;

struct operatii
{
    float suma, diferenta;
};
struct operatii mate(float x, float v);

int main()
{
    float x, y;
    operatii str;
    cout << "Dati primul numar:";
    cin >> x;
    cout << "Dati cel de-al doilea numar:";
    cin >> y;
    str = mate(x, y);
    cout << "\nNumerele sunt: " << x << " si " << y;
    cout << "\nSuma celor doua numere este: " << str.suma;
    cout << "\nDiferenta celor doua numere este: " << str.diferenta;
    cout << endl;

}

struct operatii mate(float a, float b)
{
    struct operatii str;
    str.suma = a + b;
    str.diferenta = a - b;
    return str;
}