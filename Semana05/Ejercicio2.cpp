/*
Que permita el ingreso de notas mientras sean entre 0 y 20 si se
ingresa un nota no válida, finaliza mostrando la suma, cantidad de notas
y el promedio de las notas ingresadas do while.
*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int nota, cantNotas;
	double sumaNotas, promedio;
	
	// Proceso
	cantNotas = 0;
	sumaNotas = 0.0;
	promedio = 0.0;
	do{
		
		cout << endl;
		cout << "Nota: "; cin >> nota;
		
		if(nota>=0 && nota<=20){
			cantNotas++;
			sumaNotas += nota;			
		}
		
	}while(nota>=0 && nota<=20);
	
	if(cantNotas>0){
		promedio = sumaNotas / cantNotas;
	}
	
	// Reporte
	cout << endl;
	cout << "Cantidad de notas: " << cantNotas << endl;
	cout << "Suma de notas: " << sumaNotas << endl;
	cout << "Promedio: " << promedio << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
