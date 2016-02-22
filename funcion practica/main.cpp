#include <iostream>

using namespace std;
int turno;
double ventas,pcomis,comis;
char nombre [30];
void IngresoDatos(double &ventas,int &turno,char nombre[])

{
     cout<<"nombre...: ";
    cin.getline(nombre,30);
    cout<<"ventas...: ";
    cin>>ventas;
    do
    {
     cout<<"turnos :  ";
     cin>>turno;

    }while(!(turno>=1 )and (turno<=3));

}

double PorComis(int turno)
{
    if (turno==1)
    {return 0.05;}
    else if (turno==2)
     {return 0.06;}
     else
        { return 0.04;}


}
void calcular(int turno,double ventas, double &pcomis,double &comis)
{
    pcomis=PorComis(turno);
    comis=ventas * pcomis;
}
int main()
{

  IngresoDatos(ventas,turno,nombre);
  calcular(turno,ventas,pcomis,comis);
  cout<<"porsentaje de comicion..."<<pcomis<<"\n";
  cout<<"comicion ganada"<<comis<<"\n";
}

