/*
ESTRUCTURA: switch

	switch(expresion_selector){
		case valor1:
			instrucciones1;
			break;
		case valor2:
			instrucciones2;
			break;
		...
		default:
			instrucciones;
			break;
	}

*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opcion;
	string accion;
	
	// Lectura de datos
	opcion = 2; // Aleatorio entre 1 y 5 inclusive
	
	// Proceso
	switch(opcion){
		case 1:
			accion = "Vamos al cine";
			break;
		case 2:
			accion = "Es hora de almorzar";
			break;
		case 3:
			accion = "Vamos a la playa";
			break;
		default:
			accion = "Es hora de estudiar C++";
			break;
	}
	
	// Reporte
	cout << "Opción: " << opcion << endl;
	cout << "Acción: " << accion << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

