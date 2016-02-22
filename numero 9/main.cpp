#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
   srand (time(0));
    int i=0;
    int n,numero;
    cout<<"ingresar numero de veses......:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        numero = 50 + rand () % (100-50);
        cout<<"valores de la i es "<<i<<" "
        <<"valores de numero "  <<numero <<"\n";
    }
    system("PAUSE");
    return 0;
}
