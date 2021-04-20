// Copacel_Narcis-Mihail_Lab_12_P7.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void citire(struct student*);
void afisare(struct student*);

struct student
{
    char nume[20];
    char pren[20];
    int sex; //1 pentru masculin, 2 pentru feminin
    float medie;
};

int main()
{
    int i, n, nr=0;
    struct student* p;

    printf("Dati numarul de studenti: ");
    scanf("%d", &n);

    if (!(p = (struct student*)malloc(n * sizeof(struct student))))
    {
        printf("Alocare nereusita!");
        return 1;
    }

    for (i = 0; i < n; i++)
        citire(p + i);
    for (i = 0; i < n; i++)
    {
        afisare(p + i);
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        if ((p + i)->sex == 2)
            nr++;
    }
    printf("Numarul studentelor este: %d", nr);
    return 0;
}

void citire(struct student *p)
{
    printf("Numele: ");
    scanf("%s", p->nume);
    printf("Prenumele: ");
    scanf("%s", p->pren);
    printf("Media: ");
    scanf("%f", &p->medie);
    printf("Sex: ");
    scanf("%d", &p->sex);
}

void afisare(struct student* p)
{
    printf("\t\tNume si prenume %s %s\t", p->nume, p->pren);
    printf("\n\t\tMedia: %.2f\n", p->medie);
    printf("\t\tSex: %d\n", p->sex);
}