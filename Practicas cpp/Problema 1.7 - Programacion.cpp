#include <iostream>
#include "math.h"

using namespace std;
int main()
{
   float lado1,lado2,lado3,perimetro,area;
   const float PI=3.1416;

   cout << "Este programa te permite calcular el area de un triangulo cuando le das las medidas de sus tres lados" << "\n";   
   
   cout << "Introduce la medida de un lado: ";
   cin >> lado1;
   
   cout << "Introduce la medida de un lado: ";
   cin >> lado2;
   
   cout << "Introduce la medida de un lado: ";
   cin >> lado3;
   
   perimetro =(lado1+lado2+lado3)/2;
   area =sqrt(perimetro*(perimetro-lado1)*(perimetro-lado2)*(perimetro-lado3));
   
   cout << "El area del triangulo es: " <<area << "\n";
   
   return 0;
}
