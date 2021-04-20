// Copacel_Narcis-Mihail_Lab_12_P11.cpp 
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union grup
{
    int x;
    float y;
    double z;
    char t;

}gr;

struct str
{
    int x;
    float y;
    double z;
    char t;
}st;

int main()
{
    printf("cu reuniune \n\n");
    gr.x = 2;
    printf("numarul intreg este: %d \n", gr.x);
    gr.y = 3.4;
    printf("numarul real este: %.2f\n", gr.y);
    gr.z = 70.7;
    printf("numarul de tip double este: %.2f\n", gr.z);
    gr.t = 'a';
    printf("codul ascii al caracterului este: %d\n", gr.t);
    printf("dimensiunea reuniunii este: %d\n", sizeof(gr));

    printf("\ncu structura \n\n");
    gr.x = 2;
    printf("numarul intreg este: %d \n", st.x);
    gr.y = 3.4;
    printf("numarul real este: %.2f\n", st.y);
    gr.z = 70.7;
    printf("numarul de tip double este: %.2f\n", st.z);
    gr.t = 'a';
    printf("codul ascii al caracterului este: %d\n", st.t);
    printf("dimensiunea reuniunii este: %d\n", sizeof(st));
}
