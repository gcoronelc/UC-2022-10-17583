#include <iostream>
#include <sstream> 
using namespace std;

int main( )
{
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b, c;
	stringstream reporte;
	
	// Lectura de datos
	cout<<"Ingrese valor de primer n�mero:\t\t"; cin>>a;
	cout<<"Ingrese valor de segundo n�mero:\t";  cin>>b;

	// Proceso
	reporte << "Los valores ingresados no cumplen la condici�n";
	if( a>0 && b>0){
		c = a + b;
		reporte.str("");
		reporte << "La suma es:\t\t\t\t" << c;
	}
	
	// Reporte
	cout << endl;
	cout << reporte.str() << endl;
	cout << endl;
	
	return 0;
}



