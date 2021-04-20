// Copacel_Narcis-Mihail_Lab_10_P6.cpp 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	const char* tab[3] = { "Ana","are","mere" };
	printf("%s %s %s\n", *(tab), *(tab + 1), *(tab + 2));
	_getch();

}
