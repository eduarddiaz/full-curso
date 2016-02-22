#include<stdio.h>
#include<conio.h>

int main ()
{
int a[40], lim, i, d, posma=0, posme=0, ma, me;

printf ("\n Digite el numero de posiciones del vector: ");
scanf ("%d", &lim);

for (i=0;i<lim;i++)
{
printf ("\n Digite el dato en la posicion (%d) del vector: ",i);
scanf ("%d", &d);
a[i]=d;
}

ma=a[0];
posma=0;

for (i=0;i<lim;i++)
{
if (a[i]>ma)
{
ma=a[i];
posma=i;
}
}

me=ma;
posme=0;

for (i=0;i<lim;i++)
{
if (a[i]<=me)
{
me=a[i];
posme=i;
}
}

printf ("\n La posicion del elemento mayor es: %d \n",posma);
printf ("\n La posicion del elemento menor es: %d \n",posme);

getch();

}
