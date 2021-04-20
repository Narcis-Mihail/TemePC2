// Copacel_Narcis-Mihail_Lab_11_P6.cpp 

#include  <iostream>
using  namespace  std;
void  main(void)
{
    int  m, n, * p, s = 0, ps;
    cout << "Introduceti  dimensiunile  matricii:  ";
    cin >> m >> n;
    if (m == n)
    {
        p = new  int[m * (2 * m - 1)];
        memset(p, 0, sizeof(int) * m * (2 * m - 1));
    }
    else {
        p = new  int[m * n];
    }
    cout << "Introduceti  elemetele  matricii\n";
    for (int i = 0; i < m; i++)
    {
        cout << "\tLinia  " << i + 1 << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "\t\tColoana  " << j + 1 << ":  ";
            if (m == n)
            {
                cin >> *(p + i * (2 * m - 1) + j);
            }
            else
                cin >> *(p + i * m + j);
        }
    }
    if (m == n)
    {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m - 1; j++)
                *(p + i * (2 * m - 1) + j + m) = *(p + i * (2 * m - 1) + j);
        for (int j = 0; j < m; j++)
        {
            ps = 1;
            for (int i = 0; i < m; i++)
                ps *= *(p + i * (2 * m - 1) + j + i);
            s += ps;
        }
        for (int j = 2 * m - 2; j > m - 2; j--)
        {
            ps = 1;
            for (int i = 0; i < m; i++)
                ps *= *(p + i * (2 * m - 1) + j - i);
            s -= ps;
        }
        cout << "\n\nDeterminantul  matricii  este  " << s << endl;
    }
    else {
        cout << "\nMatricea  nu  este  patratica";
    }
    delete[]p;
}
