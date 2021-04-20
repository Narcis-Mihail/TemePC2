#include    <iostream>
using    namespace    std;
struct    masina  {
        char    producator[50];
        char    culoare[50];
        float  capacitate_cilindrica;
        int  anul_fabricatiei;
};
void    main(void)
{
        int    n,  pmax  =  0;
        struct    masina*  p;
        cout  <<  "Introduceti    numarul    de    masini:    ";
        cin  >>  n;
        if  (!(p  =  new    struct    masina[n]))
        {
                cout  <<  "\n\nEroare    la    alocare!\n";
                exit(1);
        }
        cout  <<  "Introduceti    datele    masinilor:    ";
        for  (int  i  =  0;  i  <  n;  i++)
        {
                cout  <<  "\n\tProducator:    ";
                cin  >>(p  +  i)->producator;
                cout  <<  "\tAnul  fabricatiei:    ";
                cin  >>  (p  +  i)->anul_fabricatiei;
                cout  <<  "\tCapacitatea  cilindrica:    ";
                cin  >>  (p  +  i)->capacitate_cilindrica;
                cout  <<  "\tCuloare:    ";
                cin>>(p  +  i)->culoare;
        }
        for  (int  i  =  0;  i  <  n;  i++)
        {
                if  ((p  +  i)->anul_fabricatiei  >  2010)
                        if  (strcmp((p  +  i)->culoare  ,  "rosie")==0)
                {
                        cout  <<  (p  +  i)->producator  <<  "    ";
                        cout  <<  (p  +  i)->anul_fabricatiei  <<  "    ";
                        cout  <<  (p  +  i)->capacitate_cilindrica  <<  "    ";
                        cout  <<  (p  +  i)->culoare  <<  "\n";
                }
        }
        delete[]p;
}