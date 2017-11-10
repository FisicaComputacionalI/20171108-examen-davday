//programa que dice la velocidad
#include <iostream>
using namespace std;

int main()
{
  float d;
  float t;
  float v=0;
  cout<<"¿qué distancia se recorrio?(en metros)"<<endl;
  cin>>d;
  cout<<"¿Cuánto tiempo tardó?(en segundos)"<<endl;
  cin>>t;
  v=d/t;
  cout<<"La velocidad es "<<v<<"m/s"<<endl;
  return 0;
}


