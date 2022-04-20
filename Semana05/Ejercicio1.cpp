/*
Que solicite el ingreso de un número y muestre números múltiplos de 3
desde 0 hasta el número ingresado while
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero, cont;
	
	// Lectura de datos
	cout << "Número: "; cin >> numero;
	
	// Proceso
	cont = 0;
	cout << endl;
	while(cont<=numero){
		
		if(cont%3==0){
			cout << cont << ", ";
		}
		
		cont++;
	}
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
