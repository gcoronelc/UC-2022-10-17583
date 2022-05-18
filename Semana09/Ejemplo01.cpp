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

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int num1, num2;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================" << endl;
	num1 = leerEntero("Número 1: "); 
	num2 = leerEntero("Número 2: "); 

	// Proceso
	suma = fnSumar(num1, num2);
	
	
	// Reporte
	
	
	// Fin
	system("pause");
	return 0;
}
