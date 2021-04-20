// Exercițiul 1 lab_04 Copăcel Narcis-Mihail
#include <iostream>

using namespace std;
 
int main()
{
	unsigned int a, b, c;
	float ma;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	ma = (a + b + c) / 3;
	cout << "Media aritmetica a celor trei numere este:" << ma;
	return 0;
}