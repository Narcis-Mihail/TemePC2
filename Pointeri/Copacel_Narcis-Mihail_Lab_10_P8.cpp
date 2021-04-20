// Copacel_Narcis-Mihail_Lab_10_P8.cpp 
//

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char **argv)
{
    char sir[255];
    int len;
    if (argc != 2)
    {
        cout << "Numar gresit de parametrii!\n";
        return 1;
    }

    len = (int)strlen(*(argv + 1));

    cout << "Sirul inversat este:";
    for (int i = len - 1; i >= 0; i--)
        sir[len - i - 1] = *(*(argv + 1) + i);

    sir[len] = '\0';
    cout << sir << endl;
    return 0;
}
