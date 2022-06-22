#include <iostream>
using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	} else {
		return n * factorial(n-1);
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, fact;
	string ns;
	
	// Lectura de datos
	do{
		n = -1;
		cout << "Ingresa el valor para \"n\": ";
		cin  >> ns;
		if(isalpha(ns[0])){
			cout << "ERROR, debe ingresar un número." << endl;
			continue;
		}
		n = stoi(ns);
		if(n<0){
			cout << "ERROR, debe ingresar un número positivo." << endl;
		}
	}while(n<0);
	
	
	// Proceso
	fact = factorial(n);
	
	// Reporte
	cout << endl;
	cout << "Valor de ns: " << ns << endl;
	cout << "Valor de n: " << n << endl;
	cout << "Factorial: " << fact << endl;
	cout << endl;
	
	// Fin
	//system("pause");
	return 0;
}
