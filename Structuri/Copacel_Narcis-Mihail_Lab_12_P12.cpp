// Copacel_Narcis-Mihail_Lab_12_P12.cpp
//
#include<stdio.h>
#include<conio.h>
enum Lumina_Alba { rosu = 1, portocaliu, galben, verde, albastru, indigo, violet };
const char *traducere(enum Lumina_Alba culoare);
void main() {
    int roz;
    roz = rosu + albastru;
    printf("roz are valoare:%d\n", roz);
    printf("romana:rosu\t\t\t franceza:%s\n", traducere(rosu), rosu);
    printf("romana:portocaliu\t\t franceza:%s\n", traducere(portocaliu), portocaliu);
    printf("romana:galben\t\t\t franceza:%s\n", traducere(galben), galben);
    printf("romana:verde\t\t\t franceza:%s\n", traducere(verde), verde);
    printf("romana:albastru\t\t\t franceza:%s\n", traducere(albastru), albastru);
    printf("romana:indigo\t\t\t franceza:%s\n", traducere(indigo), indigo);
    printf("romana:violet\t\t\t franceza:%s\n\n", traducere(violet), violet);
    _getch();
}
const char *traducere(enum Lumina_Alba culoare) {
    switch (culoare) {
    case rosu:
        return "rouge";
        break;
    case portocaliu:
        return "orange";
        break;
    case galben:
        return "jaune";
        break;
    case verde:
        return "vert";
        break;
    case albastru:
        return "blue";
        break;
    case indigo:
        return "indigo";
        break;
    case violet:
        return "parme";
        break;
    }
}