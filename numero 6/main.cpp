#include <iostream>

using namespace std;
int numero;
int main()
{
    cout << "INGRESAR UN NUMERO.........:  ;
    cin>>numero;
    if((numero>1)and (numero<=50))
    {
        cout<<"numero esta entre 1-50";

    }
    else if((numero>=51) and(numero<=100))
    {
        cout<<"numero entre 51 -100";
    }
    else
    {
        cout<<"numero negativo";

    }
    return 0;
}
