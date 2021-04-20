// Ex.7_lab_04

#include <iostream>

using namespace std;

int main()
{ 
    float a, b, c,calc;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    calc = (1 / a) + (1 / b) + (1 / c);
    cout << "Calculul a dat" << " " << calc << endl;
    calc = (1 / int(a)) + (1 / int(b)) + (1 / int(c));
    cout << "Calculul a dat" << " " << calc;
    return 0;
    
}
