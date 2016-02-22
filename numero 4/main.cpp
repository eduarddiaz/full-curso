#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
   int num;
   printf("ingresar un numero...>");
   scanf("%d",&num);
   if(num>0)
   {
       printf("numero positivo\n");
   }
   else if(num<0)
   {
       printf("el numero es negativo\n");
   }
   else
   {
       printf("el numero es cero\n");
   }
    return 0;
}
