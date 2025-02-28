#include "iostream"
#include "string"
using namespace std;

int main ()
{
	string Nom;
	float PesoLib, LongPies;
	float Pesokg, LongMts;
	
	cout << "Escribe el nombre del dinosaurio " << "\n";
	cin >> Nom;
	cout << "Escribe el peso del dinosaurio " << "\n";
	cin >> PesoLib;
	cout << "Escribe la longitud del dinosaurio " << "\n";
	cin >> LongPies;
	
	Pesokg=PesoLib*0.453592;
	LongMts=LongPies*0.3047;
	
	cout << "El " <<Nom<< " tiene un peso en kilogramos de: " <<Pesokg<< " y la longitud en metro es de: " <<LongMts<< "\n";
	
 
}
