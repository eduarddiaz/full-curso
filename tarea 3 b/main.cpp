#include <iostream>

using namespace std;
int numero[4];
int num;
void ingreso (int numero[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
       do
       {cout<<"ingresar numereop  ["<<i<<"]";
        cin>>numero[i];
    }while((numero[i]<=0) or (numero[i]>10));
    }
}
int factorial(int num)
{
    int i,fac=1;
    for(i=0;i<5;i++)
    {
        fac= fac * i;
    }
    return fac;
}
void presentarFactorial(int numero[])
{
    int i=0;
    int facto;
    for(i=0;i<5;i++)
    {
        facto=factorial(numero[i]);
        cout<<"factorial de  "<<numero[1]<<"es"<<facto<<"\n";
    }
}
int main()
{
  ingreso(numero);
  presentarFactorial(numero);
    return 0;
}

