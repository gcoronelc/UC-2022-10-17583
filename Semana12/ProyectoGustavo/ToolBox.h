#include <iostream>
using namespace std;

// Leer opción
int leerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opción: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opción fuera de rango." << endl;
		}
	} while(op<opMin || op>opMax);
	return op;
}


/*
 * Lee un valor entero.
*/
int LeerEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}


