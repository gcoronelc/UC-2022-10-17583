#include <iostream>
using namespace std;

int fibonacci( int n ){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, fibo;
	
	// Lectura de datos
	cout << endl;
	cout << "Ingrese el valor para n: ";
	cin  >> n;
	
	// Proceso
	fibo = fibonacci(n);
	
	// Reporte
	cout << endl;
	cout << "Valor de n: " << n << endl;
	cout << "Fibonacci: " << fibo << endl;
	cout << endl;
	
	// Fin
	//system("pause");
	return 0;
}
