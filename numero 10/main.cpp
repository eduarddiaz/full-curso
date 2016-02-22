#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
   srand (time(0));
    int i=0;
   int numero,maxi=0,contar=0,suma=0,promedio=0;
    for(i=0;i<10;i++)
    {
        numero = 30 + rand () % (80-30);
        cout<<"valores de numero "  <<i<<" es "<<numero<<"\n";
        {
            maxi=numero;
        }
        contar++;
        suma+=numero; // suma= suma + numero;
    }
    promedio=suma/contar;
    cout<<"promedio"<<promedio<<"\n";
    cout<<"numero mayores "<<maxi<<"\n";

    system("PAUSE");
    return 0;
}
