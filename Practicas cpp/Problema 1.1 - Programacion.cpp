#include "iostream"
#include "string"

using namespace std;
int main ()
{
	float PrecioPro, Dev;
	float Pago;
	
	cout << "Este programa muestra el cambio de un producto vendido" << "\n";
	cout << "Escribe el precio del articulo " << "\n";
	cin >> PrecioPro;
	cout<< "Escribe la cantidad del pago" << "\n";
	cin >> Pago;
	
	Dev=Pago-PrecioPro;
	
	cout << "El cambio al cliente es: " <<Dev;
    
	return 0;
}
