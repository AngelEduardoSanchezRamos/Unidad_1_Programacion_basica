#include <iostream>
#include <string>

using namespace std;
int main()
{
   float rad;
   float vol;
   float area;
   float alt;

   cout << "Este programa te permite calcular el volumen y el area de un cilindro" << "\n"; 
   cout << "Ingresa el radio del cilindro" << "\n";
   cin >> rad;
   cout << "Ingresa la altura del cilindro" << "\n";
   cin >> alt;
   vol =3.141592*(rad*rad)*alt;
   area =2*3.141592*rad*alt;
   cout << "El volumen del cilindro es de: " << vol << "\n";   
   cout << "El area del cilindro es de: " << area << "\n";
   
   return 0;
}
