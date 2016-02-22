#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{ /*ingresar dos numeros y presantar la suma*/
    int num1,num2,suma;
    printf("ingresar un numero 1 ");

    scanf("%d",&num1);

    printf("ingresar un numero 2 ");
    scanf("%d",&num2);

    suma= num1 + num2;
    // + - / *

    printf("suma de los numeris es %d \n",suma);
    system("PAUSE");

     return 0;


}
