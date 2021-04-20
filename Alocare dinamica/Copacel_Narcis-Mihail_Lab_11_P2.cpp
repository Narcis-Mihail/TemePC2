// Copacel_Narcis-Mihail_Lab_11_P2.cpp 

#include <iostream>
using namespace std;

void introducere_date(float* tab[]);
float total_vanzari(float* p);
void eliberare_spatiu(float* tab[]);
void alocareSpatiu(float* tab[]);

int main()
{
	float* tab[5];
	float sum = 0;
	alocareSpatiu(tab);
	introducere_date(tab);

	for (int i = 0; i < 5; i++)
	{
		int tv = total_vanzari(tab[i]);
		cout << "Totalul de vanzari pe orasul " << i << " este " << tv << endl;
		sum = sum + tv;
	}
	cout << "Media vanzarilor este: " << sum / 5 << endl;
	eliberare_spatiu(tab);
	return 0;
}

void alocareSpatiu(float* tab[])
{
	for (int i = 0; i < 5; i++)
		*(tab + i) = new float[3];
}

void introducere_date(float* tab[])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		cout << "\norasul: " << i + 1 << endl;
		for (j = 0; j < 3; j++)
		{
			cout << "\t\tbiroul " << j + 1 << ": ";
			cin >> *(tab[i] + j);
		}
	}
}

float total_vanzari(float* p)
{
	int j;
	float sum = 0;
	for (j = 0; j < 3; j++)
		sum += *(p + j);
	return sum;
}

void eliberare_spatiu(float* tab[])
{
	int i;
	for (i = 0; i < 5; i++)
		delete[] * (tab + i);
}

