// Copacel_Narcis-Mihail_Lab_12_P5.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void citire(struct angajat*);
void afisare(struct angajat*);
void interschimb(struct angajat*, struct angajat*);

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
    char cnp[20];
    struct data_calend data_n;
    struct data_calend data_ang;
};

int main()
{
    int i = 0, n, j, k, min1, min2, min3;
    struct angajat ang[100], * p = &ang[0], aux;
    
    printf("Cati angajati are intreprinderea: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        citire(p + i);

    }

    int pozmin;
    for (i = 0; i < n - 1; i++)
    {
        pozmin = i;
        for (j = i + 1; j < n; j++)
        {
            if (((p + pozmin)->data_ang.an) > ((p + j)->data_ang.an))
                pozmin = j;
            else
                if (((p + pozmin)->data_ang.an) == ((p + j)->data_ang.an))
                    if (((p + pozmin)->data_ang.luna) == ((p + j)->data_ang.luna))
                        pozmin = j;
                    else
                        if (((p + pozmin)->data_ang.luna) == ((p + j)->data_ang.luna))
                            if (((p + pozmin)->data_ang.ziua) == ((p + j)->data_ang.ziua))
                                pozmin = j;
        }
        interschimb(p + i, p + pozmin);

    }

    printf("Persoanele care lucreaza in interprindere afisate in ordinea angajarii sunt: \n");
    for (k = 0; k < n; k++)
    {
        printf("\n\tAngajatul: %d\n",k+1);
        afisare(p + k);
    }
}

void interschimb(struct angajat* a, struct angajat* b)
{
    struct angajat aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void citire(struct angajat* p)
{
    printf("\nNumele: ");
    scanf("%s", p->nume);
    printf("\nPrenumele: ");
    scanf("%s", p->pren);
    printf("\nCNP: ");
    scanf("%s", p->cnp);
    printf("\nData nasterii: ");
    scanf("%d %d %d", &p->data_n.an, &p->data_n.luna, &p->data_n.ziua);

    printf("\nData angajarii: ");
    scanf("%d %d %d", &p->data_ang.an, &p->data_ang.luna, &p->data_ang.ziua);
}

void afisare(struct angajat* p)
{
    printf("\t\tNumele: %s\n", p->nume);
    printf("\t\tPrenumele: %s\n", p->pren);
    printf("\t\tCNP-ul: %s\n", p->cnp);
    printf("\t\tData nasterii: %d/%d/%d\n", p->data_n.an, p->data_n.luna, p->data_n.ziua);
    printf("\t\tData angajarii: %d/%d/%d\n",p->data_ang.an, p->data_ang.luna, p->data_ang.ziua);
}