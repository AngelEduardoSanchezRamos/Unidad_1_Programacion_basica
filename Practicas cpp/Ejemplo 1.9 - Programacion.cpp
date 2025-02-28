#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int Num,Total,Total1;
	cout << "Hola, este prorama te permite saber el cuadrado y el cubo de un numero" << "\n";
	cout << "Ingresa un valor positivo:" << "\n";
	    cin >> Num;
	Total=Num*Num;
	Total1=Num*Total;
	cout << "El cuadrado de "<<Num<<" es: "<<Total<<" y el cubo es: "<<Total1;
	return 0;
}
