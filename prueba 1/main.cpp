#include <iostream>

using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
  int num,promedio1,mayor=0,menor=1000;
  int c=0;
  while (c<5)
  {
      cout<<"ingresar nunmer....";
      cin>>num;

      if ((num>=1)and num<=50)
      {


        c1++;

      }
      else if((num>=51) and (num<=100))
      {

        c2++;

      }

      else if (num>=101)
      {

        c3++;
      }
    c++;

    if(num > mayor)
    {
        mayor=num;

    }
    if(num < menor)
    {
        menor=num;
    }

  }


cout<<"contador 0-50 "<<c1<<"\n";

cout<<"contador 51-100 "<<c2<<"\n";

cout<<"contador >101 "<<c3<<"\n";

cout<<"mayo   "<<mayor<<"\n";
cout<<"menor  "<<menor<<"\n";


    return 0;
}
