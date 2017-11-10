//diagrama el programa muestra los numeros impares no dividsibles entre 3 entre los valores 1 y 5
#include <iostream>
using namespace std;

int main()
{
  int x=1;
  while(x<=5)
    {
      if (x%3==0)
	{
	x=x+2;
	}
      else
	{
      cout<<"el valor de x es "<<x<<endl;
      x=x+2;
	}
    }
  return 0;
}
  
