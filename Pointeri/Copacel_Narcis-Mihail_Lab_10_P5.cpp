// Copacel_Narcis-Mihail_Lab_10_P5.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int r, r1, x;
	const char* mesaj[] = { "valoare prea mica","valoare corecta","valoare prea mare" };
	int RANGE_MIN = 1;
	int RANGE_MAX = 100;
	srand((unsigned)time(NULL));
	r = (int)rand() * (RANGE_MAX - RANGE_MIN) / RAND_MAX + RANGE_MIN;
	do
	{
		printf("Introduceti un numar intreg intre 1 si 100: ");
		scanf("%d", &x);
		if (x != r)
			if (x < r)
				printf("%s\n", mesaj[0]);
			else
				printf("%s\n", mesaj[2]);
		else
			printf("%s\n", mesaj[1]);

	} while (x != r);
	_getch();
}

