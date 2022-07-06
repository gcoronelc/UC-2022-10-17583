#include <iostream>

using namespace std;

// Leer opción
int leerOpcion(int opMin, int opMax){
	int op;
	string cadIngreso;
	do{
		cout << "Opción: "; cin >> cadIngreso;
		if (isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
			op = opMin - 1;
			continue;
		}
		op = atoi(cadIngreso.c_str());
		if(op<opMin || op>opMax){
			cout << "Error, opción fuera de rango." << endl;
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
int leerEntero(string etiqueta, int valorMinimo, int valorMaximo){
	int valor;
	string cadIngreso;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if (isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
			valor = valorMinimo - 1;
			continue;
		}
		valor = atoi(cadIngreso.c_str());		
		if(valor<valorMinimo || valor>valorMaximo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo || valor>valorMaximo);
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
 
 
 
