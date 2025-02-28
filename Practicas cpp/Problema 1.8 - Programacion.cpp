#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float d,x1,y1,x2,y2;

   cout << "Este programa calcula la distancia que hay entre un punto y otro" << "\n";
   cout << "Ingrese el valor de la primera coordenada x: " << "\n";
   cin >> x1;
   
   cout << "Ingrese el valor de la primera coordenada y: " << "\n";
   cin >> y1;
   
   cout << "Ingrese el valor de la segunda coordenada x: " << "\n";
   cin >> x2;
   
   cout << "Ingrese el valor de la segunda coordenada y: " <<"\n";
   cin >> y2;
  
   d =sqrt(pow((x1-x2),2)+pow((y1-y2),2));
  
   cout << "La distancia entre los dos puntos es: " <<d << "\n";

   return 0;
}
