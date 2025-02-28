#include <stdio.h>
#include "iostream"
using namespace std;

int main ()
{
	float Altura,Base;
	float Area,Perimetro;
	cout << "Este programa te permite calcular el perimetro y el area de un rectanngulo" << "\n";
	cout << "Introduce la base del rectangulo: " << "\n";
	cin >> Base;
	cout << "Introduce la altura del rectangulo: " << "\n";
	cin >> Altura;
	
	Perimetro=(Base+Altura)*2;
	Area=Base*Altura;
	printf ("\n El perimetro del rectangulo es: %5.2f \n", Perimetro);
	printf ("\n El area del rectangulo es: %5.2f \n", Area);
	
	return 0;
}
