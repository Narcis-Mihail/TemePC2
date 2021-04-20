// Copacel_Narcis-Mihail_Lab_12_P8.cpp 
//

#include <iostream>
using namespace std;

struct o_struct
{
    int a;
    char c;
    char s[256];
};

int main()
{
    struct o_struct str, * po_struct;

    cout << "Dati numarul intreg: ";
    cin >> str.a;
    cout << "Dati caracterul: ";
    cin >> str.c;
    cout << "Dati sirul de caractere: ";
    cin >> str.s;

    if (!(po_struct = new struct o_struct[1]))
    {
        cout << "\nAlocare nereusita!";
        return 1;
    }

    cout << "\nDati numarul intreg: ";
    cin >> po_struct->a;
    cout << "\nDati caracterul: ";
    cin >> po_struct->c;
    cout << "\nDati sirul de caractere: ";
    cin >> po_struct->s;

    cout << "\nNumarul intreg este: " << str.a;
    cout << "\nCaracterul este: " << str.c;
    cout << "\nSirul de caractere este: " << str.s;

    cout << "\nNumarul intreg este: " << po_struct->a;
    cout << "\nCaracterul este: " << po_struct->c;
    cout << "\nSirul de caractere este: " << po_struct->s;

    delete[]po_struct;
    return 0;
}

