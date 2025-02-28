#include <iostream>
#include <string>

using namespace std;
int main()
{
   int dias;
   float seg;

   cout << "Este programa te permite calcular cuantos segundos hay en un determinado numero de dias" << "\n";   
   cout << "Introduce la cantidad de dias que quieres convertir" << "\n";
      cin >> dias;
   
   seg =dias*24*60*60;
   
   cout << "En " <<dias<< " dias  hay " <<seg<< " segundos" << "\n";
   return 0;
}
