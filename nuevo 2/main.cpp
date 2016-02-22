#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{   double ne,na,nf;

    printf("ingresar nota de examen ...>");

    scanf("%lf",&ne);

    printf("ingresar nota acumulada ...>");
    scanf("%lf",&na);

    nf=(na*0.3) + (ne*0.7);
    if (nf>=60)

    {
        printf("estado de la nota aprobado\n");
    }
    else
    {
        printf("estado de la nota reprobado\n");
        printf("reprobado ocupa tutoria");
    }



    printf("nota final %lf \n",nf);

    system("PAUSE");


    return 0;
}
