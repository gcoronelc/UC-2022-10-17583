/*
Lectura de un n�mero positivo con validaci�n.
*/
#include<iostream>
using namespace std;

int main( )
{ 	
  // Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	// Variable
	int num;
	// Proceso de lectura
	do{	
		cout << "Ingrese un numero positivo: ";
		cin  >> num;		
		if(num <= 0){
			cout <<"ERROR. Ingrese nuevamente." << endl;
		}
	} while(num <= 0);
	cout << "Lograste ingresar un n�mero positivo.";
	// Fin
	return 0;
}




