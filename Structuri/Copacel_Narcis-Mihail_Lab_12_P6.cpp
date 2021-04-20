// Copacel_Narcis-Mihail_Lab_12_P6.cpp 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void citire(struct student *);
void afisare(struct student*);
struct student cmb_stud(struct student* p, int n);
struct student
{
    char nume[20];
    char pren[20];
    float medie;
};

struct student* p, cmb, * pb = &cmb;

int main()
{
    int i, a = 0, n;
    printf("Dati numarul de studenti: ");
    scanf("%d", &n);

    if (!(p = (struct student*)malloc(n * sizeof(struct student))))
    {
        printf("Alocare nereusita!");
        return 1;
    }

    for (i = 0; i < n; i++)
        citire(p + i);
    printf("\nStudentul cu media cea mai mare este: \n");
    cmb = cmb_stud(p, n);
    afisare(pb);

    i = 1;
    while ((p + i)->medie == p->medie)
    {
        a++;
        i++;
    }
    printf("Mai sunt inca %d studenti cu aceeasi medie.\n", a);
    for (i = 1; i <= a; i++)
        afisare(p + i);

    free(p);
    return 0;
}

void citire(struct student* p)
{
    printf("Numele: ");
    scanf("%s", p->nume);
    printf("Prenumele: ");
    scanf("%s", p->pren);
    printf("Media: ");
    scanf("%f", &p->medie);
    printf("\n");
}

void afisare(struct student* p)
{
    printf("Nume si prenume: %s %s\t", p->nume, p->pren);
    printf("\nMedia: %.2f\n", p->medie);
}

struct student cmb_stud(struct student* p, int n)
{
    int i, j;
    struct student aux;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if ((p + i)->medie < (p + j)->medie)
            {
                aux = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = aux;
            }
    return *p;
}