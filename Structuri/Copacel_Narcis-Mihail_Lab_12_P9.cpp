#include  <iostream>
using  namespace  std;
struct  produs  {
        char  denumire[50];
        float  pret,  cantitate;
};
void  main(void)
{
        int  n,  pmax  =  0;
        struct  produs*  p;
        cout  <<  "Introduceti  numarul  de  produse:  ";
        cin  >>  n;
        if  (!(p  =  new  struct  produs[n]))
        {
                cout  <<  "\n\nEroare  la  alocare!\n";
                exit(1);
        }
        cout  <<  "Introduceti  datele  produselor:  ";
        for  (int  i  =  0;  i  <  n;  i++)
        {
                cout  <<  "\n\tDenumire:  ";
                cin  >>  (p  +  i)->denumire;
                cout  <<  "\tPret:  ";
                cin  >>  (p  +  i)->pret;
                cout  <<  "\tCantitate:  ";
                cin  >>  (p  +  i)->cantitate;
                if  ((p  +  i)->cantitate  >  pmax)
                        pmax  =  (p  +  i)->cantitate;
        }
        cout  <<  "Produsele  din  care  avem  cel  mai  mult  pe  stoc  sunt:";
        for  (int  i  =  0;  i  <  n;  i++)
        {
                if  ((p  +  i)->cantitate  ==  pmax)
                        cout  <<  (p  +  i)->denumire<<"  ";
        }
        delete[]p;
}