#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num,suma=0,mayor=0,contar=0,contapar;
    double promedio;
    char resp;

    do

    { do
     {cout<<"ingresar numero";
    cin>>num;

     }while(!((num>=50) and (num<=100)));
     _flushall();
    do
       {
       cout<<"decea continuar ....";
       cin.get(resp);
       _flushall();
       }while ((toupper(resp) !='S') and(toupper(resp) !='N'));

       suma = suma+num;
       if (num>mayor)
       {
           mayor=num;
       }
       contar++;
       if (num%2==0)
       {
           contapar++;
       }

    } while ((toupper(resp)=='S'));
    promedio = suma/ num;

  cout<<"promedio "<<promedio<<"\n";
  cout<<"mayor  "<<mayor<<"\n";
  cout<<"conta oar  "<<contapar<<"\n";

    system( "PAUSE");
    return 0;
}
