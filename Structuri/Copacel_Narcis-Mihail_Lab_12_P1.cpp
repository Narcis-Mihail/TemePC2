// Copacel_Narcis-Mihail_Lab_12_P1.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100
#define LENGTH 20

void citire(struct student*);
void afisare(struct student*);
struct student {
    char nume[LENGTH];
    char pren[LENGTH];
    char tara[LENGTH / 2];
    int grupa;
    int an;
};
struct student st[MAX], * p = &st[0];
int main()
{
   const char *tab[] = { "AAA","RO"};
    int i = 0, gr, n, m = 0, k, nr = 0;
    printf("Numele:");
    scanf("%s", p->nume);
    if (strcmp(p->nume, *tab) != 0)
    {
        while (strcmp((p + i)->nume, tab[0]) != 0)
        {
            citire(p + i);
            i++;
            printf("\nNumele:");
            scanf("%s", (p + i)->nume);
        }
        n = i;
    }
    else
    {
        printf("Primul nume introdus e chiar AAA! Nu se mai citesc datele studentilor");
        return 1;
    }

    printf("Dati grupa in care se face cautarea:");
    scanf("%d", &gr);
    printf("\nStudentii straini din grupa %d sunt urmatorii: \n", gr);
    for(k=0;k<n;k++)
        if (((p + k)->grupa == gr) && (strcmp((p + k)->tara, tab[1]) != 0))
        {
            nr++;
            afisare(p + k);
       }
    printf("\nSunt %d studenti straini in grupa %d\n", nr, gr);
    return 0;
}

void citire(struct student* p)
{
    printf("\nPrenumele:");
    scanf("%s", p->pren);
    printf("\nTara:");
    scanf("%s", p->tara);
    printf("\nGrupa:");
    scanf("%d", &p->grupa);
    printf("\Anul nasterii:");
    scanf("%s", &p->an);
}

void afisare(struct student* p)
{
    printf("\tNume si Prenume: %s %s\n", p->nume, p->pren);
    printf("\tTara de origine: %s\n", p->tara);
    printf("\tGrupa: %d\n", p->grupa);
    printf("\tAnul nasterii: %d\n", p->an);
}