/*
 * Desarrollar un programa para calcular la suma de 2 n�meros.
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2, suma;
	
	// Lectura de datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "=========================" << endl;
	cout << "N�mero 1: "; cin >> numero1;
	cout << "N�mero 2: "; cin >> numero2;
	
	// Proceso
	suma = numero1 + numero2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=========================" << endl;
	cout << "Suma: " << suma << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

