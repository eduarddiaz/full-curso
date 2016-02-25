#include <iostream>

using namespace std;
int num[4];
double prom;
int cpar;
void ingreso(int num[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<"ingresar numero["<<i<<"]:";
        cin>>num[i];
    }
}
double promedio(int numero[])
{int i; double suma=0;
for(i=0;i<5;i++)
{
    suma =suma+ numero[1];
}return suma/5;

}
int contapar ( int num[])
{
    int i=0; int par=0;
    for(i=0;i<5;i++)
    {
        if (num[i]%2==0)
        {
            par++;
        }
    }
    return par;
}
int main()

{
    ingreso(num);
    prom=promedio(num);
    cpar=contapar(num);
    cout<<"promedio "<<prom<<"\n";
    cout<<"conta par "<<cpar<<"\n";
    return 0;
}
