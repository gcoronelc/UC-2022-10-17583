#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2;
	int suma, resta, producto, division1, residuo;
	double division2;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================" << endl;
	cout << "N�mero 1: "; cin >> numero1;
	cout << "N�mero 2: "; cin >> numero2;
	
	// Proceso
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	producto = numero1 * numero2;
	division1 = numero1 / numero2;
	division2 = numero1 * 1.0 / numero2;
	residuo = numero1 % numero2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================" << endl;
	cout << "Suma: " << suma << endl;	
	cout << "Resta: " << resta << endl;	
	cout << "Producto: " << producto << endl;	
	cout << "Divisi�n 1: " << division1 << endl;	
	cout << "Divisi�n 2: " << division2 << endl;	
	cout << "Residuo: " << residuo << endl;
	cout << endl;	
	
	// Fin
	system("pause");
	return 0;
}

