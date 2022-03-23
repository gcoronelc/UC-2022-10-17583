#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	const double tipoCambio = 3.74;
	double soles, dolares;
	
	// Lectura de datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================" << endl;
	cout << "Importe en soles: "; cin >> soles;
	
	// Proceso
	dolares = soles / tipoCambio;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==========================" << endl;
	cout << "Dolares: " << dolares << endl;
	cout << endl;	
	
	// Fin
	system("pause");
	return 0;
}

