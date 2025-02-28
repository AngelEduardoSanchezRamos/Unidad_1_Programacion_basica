#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int MAT;
	float Prom,Cal1,Cal2,Cal3,Cal4,Cal5;
	cout << "Hola, este programa te permite promediar calificaciones" << "\n";
	cout << "Por favor ingrese la matricula del alumno: " << "\n";
	cin >> MAT;
	cout << "Por favor ingrese la primera califacion: " << "\n";
	    cin >> Cal1;
	cout << "Por favor ingrese la segunda calificacion: " << "\n";
	    cin >> Cal2;
	cout << "Por favor ingrese la tercera calificacion: " << "\n";
	    cin >> Cal3;
	cout << "Por favor ingrese la cuarta calificacion: " << "\n";
	    cin >> Cal4;
	cout << "Por favor ingrese la quinta calificacion: " << "\n";
	    cin >> Cal5;
	Prom=(Cal1+Cal2+Cal3+Cal4+Cal5)/5.0;
	printf ("\n El promedio del alumno con la matricula %d es %5.2f \n",MAT,Prom);
	cout << "\n El promedio del alumno con la matricula " << MAT <<" es "<<Prom <<"\n";
}
