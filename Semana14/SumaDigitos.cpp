#include <iostream>
using namespace std;

int fnSuma(int n){
	if(n==0){
		return 0;
	} else {
		return (n%10) + fnSuma(n/10);
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, suma;
	
	// Lectura de datos
	cout << endl;
	cout << "Ingrese valor para n: ";
	cin  >> n;
	
	// Proceso
	suma = fnSuma(n);
	
	// Reporte
	cout << endl;
	cout << "n = " << n << endl;
	cout << "Suma = " << suma << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
