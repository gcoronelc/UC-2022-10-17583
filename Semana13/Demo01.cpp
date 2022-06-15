#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char dato, datoMayuscula, datoMinuscula;
	int datoMayusculaASCII, datoMinusculaASCII;
	
	// Lectura de datos
	cout << "Ingrese una letra: "; cin >> dato;
	
	// Proceso
	datoMayuscula = toupper(dato);
	datoMayusculaASCII = int(datoMayuscula);
	datoMinuscula = tolower(dato);
	datoMinusculaASCII = int(datoMinuscula);
	
	// Reporte
	cout << endl;
	cout << "Dato original: " << dato << endl;
	cout << "Dato mayuscula: " << datoMayuscula << endl;
	cout << "ASCII Dato mayuscula: " << datoMayusculaASCII << endl;
	cout << "Dato minuscula: " << datoMinuscula << endl;
	cout << "ASCII Dato minuscula: " << datoMinusculaASCII << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
