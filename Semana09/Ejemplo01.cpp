/*
 * Desarrollar un programa que permita calcular la
 * suma y la potencia de 2 numeros.
*/

#include <iostream>
using namespace std;



// FUNCIONES

// Función: leerEntero

int leerEntero(string etiqueta){
	int numero;
	cout << etiqueta;
	cin  >> numero;
	return numero;
}

int fnSumar(int num1, int num2){
	int suma;
	suma = num1 + num2;
	return suma;
}

int fnPotencia(int base, int exponente){
	int potencia;
	// Falta, es un reto.
	return potencia;
}

// PROCEDIMIENTOS

void reporteFinal(int suma){
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===================================" << endl;
	cout << "Suma: " << suma << endl;
	cout << endl;
}


// FUNCION PRINCIPAL

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int num1, num2, suma, potencia;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================" << endl;
	num1 = leerEntero("Número 1: "); 
	num2 = leerEntero("Número 2: "); 

	// Proceso
	suma = fnSumar(num1, num2);
	potencia = fnPotencia(num1, num2);
	
	
	// Reporte
	reporteFinal(suma);
	
	// Fin
	system("pause");
	return 0;
}
