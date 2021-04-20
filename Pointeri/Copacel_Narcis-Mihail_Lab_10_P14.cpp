// Copacel_Narcis-Mihail_Lab_10_P14.cpp 
//

#include    <iostream>

using namespace std;

int main()
{
    int A[100], B[100], C[200], *p1=&A[0],*p2=&B[0],*p3=&C[0];
    int n, m, k = 0;

    cout << "Introduceti numarul de elemente corespunzator vectorului A: "; cin >> n;
    cout << "Introduceti elementele vectorului A: ";
    for (int i = 0; i < n; i++)
        cin >> *(p1+i);

    cout << "Introduceti numarul de elemente corespunzator vectorului B: "; cin >> m;
    cout << "Introduceti elementele vectorului B: ";
    for (int i = 0; i < m; i++)
        cin >> *(p2+i);

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (*(p1+i) < *(p2+j))
        {
            *(p3+k) = *(p1 + i);
            k++;
            i++;
        }
        else
        {
            *(p3 + k) = *(p2 + j);
            k++;
            j++;
        }
    }

    if (i <= n)
    {
        for (int p = i; p < n; p++)
        {
            *(p3 + k) = *(p1 + p);
            k++;
        }
    }
    if (j <= m)
    {
        for (int p = j; p < m; p++)
        {
            *(p3 + k) = *(p2 + p);
            k++;
        }
    }

    for (int p = 0; p < k; p++)
        cout << *(p3+p) << " ";

    return 0;
}