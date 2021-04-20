#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<math.h>
using    namespace  std;
char*  v;
char*  s;
void    main()
{
        int    N,  i,  n;
        cout  <<  "Introduceti    dimensiunea  primului  sir:";
        cin  >>  N;
        if  (N  <=  0)
        {
                cout  <<  "Dimensiune    invalida!";
                return;
        }
        v  =  (char*)malloc(N  *  sizeof(int));
        if  (v  ==  NULL)
        {
                cout  <<  "\n    Alocare    esuata!";
                return;
        }
        else
        {
                cout  <<  "Introduceti  primul  sir:";
                cin.get();
                cin.get(v,  N);
                        cout  <<  "Introduceti    dimensiunea  celui  de-al  doilea  sir:";
                cin  >>  n;
                cin.get();
                cout  <<  "Introduceti  al  doilea  sir:";
                s  =  (char*)malloc(n  *  sizeof(int));
                cin.get(s,  n);
                strcat(v,  s);
                cout  <<  "\n  Sirul  final  este:    ";
                i  =  0;
                while  (v[i])
                {
                        cout  <<  "\n    v["  <<  i  <<  "]=    "  <<  *(v  +  i);
                        i++;
                }
        }
        if  (v)
                free(v);
        if  (s)
                free(s);
}