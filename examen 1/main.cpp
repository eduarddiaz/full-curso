#include <iostream>

using namespace std;
int turno,turnox,turnodpagon,turnoextra;
int pagonrm,pagoxtr,horas,horasx;
char nombre [30];
void Ingreso(int &turno,int &horas,int &horasx , char nombre[])

{
     cout<<"nombre...: ";
    cin.getline(nombre,30);
    cout<<"horas trabajadas  : ";
    cin>>horas;
    cout<<"horas extra trabajada  : ";
    cin>>horasx;

    do
    {
     cout<<"turnos  :  ";
     cin>>turno;

    }while(!(turno>=1 )and (turno<=4));

}

int pagonormal(int turno)
{

    if (turno==1)
    {return 200;}
    else if (turno==3)
     {return 200;}
     else
        { return 300;}


}
int pagoextra(int turnox)
{

    if (turno==1)
    {return 250;}
    else if (turno==3)
     {return 250;}
     else
        { return 350;}


}
double calcularpago(int &pagonrm,int horas,int &turnodpagon)
{
    turnodpagon=pagonormal(turno);
    pagonrm=horas*turnodpagon;

}
double calcularpagoextra(int horasx,int &pagoxtr,int &turnoextra)
{   turnoextra=pagoextra(turnoextra);
    pagoxtr=horas*turnoextra;
}

int main()

{
  Ingreso(turno,horas,horasx,nombre);
  calcularpago(pagonrm,horas,turnodpagon);
  calcularpagoextra(horasx,pagoxtr,turnoextra);
cout<<"pago normal  "<<pagonrm<<"\n";
cout<<"pago extra   "<<pagoxtr<<"\n";

    return 0;
}
