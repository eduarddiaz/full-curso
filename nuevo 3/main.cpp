#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   int num1,num2,mayor;
   printf("ingresar primer nunmero:");
   scanf("%d",&num1);
   printf("ingresar primer nunmero 2:");
   scanf("%d",&num2);
   if(num1>num2)
   {
       mayor=num1;

   }
   else
   {
       mayor = num2;
   }
   printf("numero manor es %d \n",mayor);

    return 0;
}
