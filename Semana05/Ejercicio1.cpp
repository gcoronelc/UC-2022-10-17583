/*
Que solicite el ingreso de un n�mero y muestre n�meros m�ltiplos de 3
desde 0 hasta el n�mero ingresado while
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero, cont;
	
	// Lectura de datos
	cout << "N�mero: "; cin >> numero;
	
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
