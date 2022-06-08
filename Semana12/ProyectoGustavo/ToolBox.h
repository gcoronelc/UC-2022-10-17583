#include <iostream>
using namespace std;

// Leer opci�n
int leerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opci�n: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opci�n fuera de rango." << endl;
		}
	} while(op<opMin || op>opMax);
	return op;
}


/*
 * Lee un valor entero.
*/
int leerEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}


/*
 * Lee un valor entero.
*/
int leerDouble(string etiqueta, double valorMinimo){
	double valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}


/*
 * Lee el sexo de una persona: M o F
*/
char leerSexo(string etiqueta){
 	char sexo;
 	do{
 		cout << etiqueta; cin >> sexo;
 		sexo = toupper(sexo);
 		if(sexo!='M' && sexo!='F'){
 			cout << "Error, este datos es M o F." << endl;
		 }
	}while(sexo!='M' && sexo!='F');
 	return sexo;
}
 
 
 
