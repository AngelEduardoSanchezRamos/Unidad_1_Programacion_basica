#include "iostream"
using namespace std;

int main ()
{
	float Galones, Total;
	const float Galon=3.785, PrecioLt=8.20;
	
	cout << "Escribe el numero de galones que se estan comprando" << "\n";
	cin >> Galones;
	
	Total=Galones*Galon*PrecioLt;
	
	cout << "El precio a cobrar por " <<Galones<< " galones " << "es de " <<Total<< " pesos " << "\n";
	
	return 0;
}
