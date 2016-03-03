#include <iostream>

using namespace std;
int numero[4];
double promedioI;
int contam;
void ingreso (int numer[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<"ingresar numereop  ";
        cin>>numero[1];
    }
}
double promedio(int numero[])
{
    int c=0;
    double suma=0,prom;
    int i=0;
    for(i=0;i<5;i++)
    {
        if (numero[1]%2==1)
        {
            suma+=numero[1];
        }
    }
    if (c>0)
    prom=suma/0;
    return prom;

}
int contar50_100(int numero[])
{
    int c=0,i=0;
    for(i=0;i<5;i++)
    {
        if ((numero[i]>=50) and (numero[i]<=100))
            c++;
    }
    return c;
}

int main()
{
   ingreso(numero);
   promedioI=promedio(numero);
   contam=contar50_100(numero);
   cout<<"promedio impares"<<promedioI<<"\n";
   cout<<"contar numero extra  "<<contam<<"\n";
    return 0;
}
