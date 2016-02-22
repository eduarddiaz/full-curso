#include <iostream>

using namespace std;
int horas,turno,pago;
char nombre [30];
void LecturaDatos(int &horas,int &turno,char nombre[])
{
    cout<<"nombre del alumno...: ";
    cin.getline(nombre,30);
    cout<<"horas   :  ";
    cin>>horas;
    cout<<"turnos :  ";
    cin>>turno;
}
int pagos(int pago)
{int pagox;
   if (turno=1)
   {
     pagox=100*horas;
   }
    if (turno=2)
   {
       pagox=120*horas;
   }
   if (turno=3);
   {
       pagox=150*horas;
   }


}
int main()
{
    LecturaDatos(horas,turno,nombre);
    pago=pagos(pago);

    cout<<"pago es igual  "<<pago<<"\n";
}
