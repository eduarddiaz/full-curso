#include <iostream>

using namespace std;
int na,ne,nf;
char nombre [30];

void LecturaDatos(int &na,int &ne,char nombre[])
{
    cout<<"nombre del alumno...: ";
    cin.getline(nombre,30);
    cout<<"nota acumulada   :  ";
    cin>>na;
    cout<<"nota de examen  :  ";
    cin>>ne;
}
void observa(int nf)
{
    if (nf >=60)
    {
        cout<<"aprobado";
    }
    else
    {
        cout<<"reprobado";
    }
    cout<<"\n";
}
int notafinal(int na, int ne)
{   int xnf;
     xnf=na+ne;
     return xnf;

}
int main()
{

    LecturaDatos(na,ne,nombre);
    nf=notafinal(na,ne);
    observa(nf);
    cout<<"nota final  :  "<<nf<<"\n";
}
