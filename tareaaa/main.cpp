#include <iostream>

using namespace std;
int numero[4];
int maxi,mini;
void ingreso(int numero[])
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"ingresar numero["<<i<<"]:";
        cin>>numero[i];
    }
}
void presentar(int numero[])
{
     int i;
     for(i=0;i<5;i++)
     {
         cout<<numero[i]<<"\n";
     }
}
int mayor(int numero[])
{
    int i;
    int auxmayor=0;
    for(i=0;i<5;i++)
    {
        if (auxmayor<numero[i])
            auxmayor = numero[i];
    }
    return auxmayor;
}
int menor(int numero[])
{
    int i;
    int auxmenor=numero[0];
    for(i=0;i<5;i++)
    {
        if (auxmenor>numero[i])
            auxmenor= numero[i];
    }
    return auxmenor;
}
int main()
{
    ingreso(numero);
    presentar(numero);
    maxi=mayor(numero);
    mini=menor(numero);
    cout<<"numero mayor   "<<maxi<<"\n";
    cout<<"numero menor   "<<mini<<"\n";

    return 0;
}
