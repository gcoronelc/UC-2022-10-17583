/*
Hallar la suma de numeros impares comprendidos entre m y n, por ejemplo:
. m=10 y n=30
. m=50 y n=25
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int m, n, t, suma;
	
	// Lectura de datos
	cout << "Valor de M: "; cin >> m;
	cout << "Valor de N: "; cin >> n;
	
	// Validación
	if(m<=0 || n<=0){
		cout << endl;
		cout << "Los numeros ingresados deben ser positivos." << endl;
		cout << endl;
		return 0;
	}
	
	// Proceso
	// Ordenar numeros
	if(m>n){
		t = m;
		m = n;
		n = t;
	}
	// La suma
	suma = 0;
	for(int i=m; i<=n; i++){
		suma += (i%2==1)?i:0;
	}
	
	// Reporte
	cout << endl;
	cout << "La suma de impares es: " << suma << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
