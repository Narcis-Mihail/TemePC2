// Copacel_Narcis-Mihail_Lab_12_P2.cpp
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void afisare1(struct evidenta evid);
void afisare2(struct evidenta*);
struct evidenta
{
    char nume[20];
    char pren[20];
    char tara[20];
}evid;

int main()
{
    int i, n;
    printf("dati nr de persoane:");
    scanf("%d", &n);

    struct evidenta ev[100], * p = &ev[0];
    for (i = 0; i < n; i++)
    {
        printf("Numele:");
        scanf("%s", (p + i)->nume);
        printf("Prenumele:");
        scanf("%s", (p + i)->pren);
        printf("Tara de origine:");
        scanf("%s", (p + i)->tara);
    }

    printf("\npersoanele din evidenta sunt afisate folosind transferul structurii prin adresa: ");
    for (i = 0; i < n; i++)
    {
        afisare2(p + i);
    }

    printf("\npersoanele din evidenta sunt afisate folosind transferul structurii prin valoare:");
    for(i=0;i<n;i++)
    {
        afisare1(ev[i]);
    }
    return 0;
}

void afisare1(struct evidenta evid)
{
    printf("\n\tNume si prenume: %s %s\n", evid.nume, evid.pren);
    printf("\tTara de origine: %s\n", evid.tara);
}

void afisare2(struct evidenta* p)
{
    printf("\n\tNume si prenume: %s %s\n", p->nume, p->pren);
    printf("\tTara de origine: %s\n", p->tara);
}

