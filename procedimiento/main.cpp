#include <iostream>

using namespace std;
int n1,n2,suma;
void ingreso(int &ni,int &n2)
{
    cout<<"ingresar valor de n1...: ";
    cin>>n1;
    cout<<"ingresar valor de n2...: ";
    cin>>n2;
}
void SumaNumeros(int ni,int n2,int &suma)
{
    suma = n1 + n2;
}
void presentar()
{
     cout<<" suma de los numero es  ...."<<suma<<"\n";

}
int main()
{
    ingreso (n1,n2);
    SumaNumeros(n1,n2,suma);
   presentar();

    return 0;
}
