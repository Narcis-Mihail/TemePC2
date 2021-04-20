// Copacel_Narcis-Mihail_Lab_12_P4.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void citire(struct angajat*);
void afisare(struct angajat*);
struct data_calend
{
    int luna;
    int ziua;
    int an;
};

struct angajat
{
    char nume[20];
    char pren[20];
    char ocupatia[20];
    char sectia[10];
    struct data_calend data_n;
};

int main()
{
    int i = 0, n;
    struct angajat ang[100], * p = &ang[0];
   const char* tab = "inginer";

    printf("Cati angajati are intreprinderea: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        citire(p + i);
    }

    printf("Urmatorii angajati sunt ingineri:\n");
    for (i = 0; i < n; i++)
    {
        if (strcmp((p + i)->ocupatia,tab) == 0)
        {
            printf("\n\tAngajatul %d \n\n", i + i);
            afisare(p + i);
        }
    }

    return 1;
}

void citire(struct angajat* p)
{
    printf("\nNumele:");
    scanf("%s", p->nume);
    printf("\nPrenumele:");
    scanf("%s", p->pren);
    printf("\nOcupatia:");
    scanf("%s", p->ocupatia);
    printf("\nSectia:");
    scanf("%s", p->sectia);
    printf("\nData nasterii:");
    printf("\nAnul:");
    scanf("%d", &p->data_n.an);
    printf("\nLuna:");
    scanf("%d", &p->data_n.luna);
    printf("\nZiua:");
    scanf("%d", &p->data_n.ziua);
}

void afisare(struct angajat* p)
{
    printf("\t\tNumele: %s\n",p->nume);
    printf("\t\tPrenumele: %s\n", p->pren);
    printf("\t\tOcupatia: %s\n", p->ocupatia);
    printf("\t\tSectia: %s\n", p->sectia);
    printf("\t\tData nasterii: %d/%d/%d\n", p->data_n.ziua, p->data_n.luna, p->data_n.an);
}