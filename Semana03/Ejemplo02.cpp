/*
ESTRUCTURA IF
-----------------------------

	if( condicion ){
		instrucciones1;
	} else {
		instrucciones2;
	}

*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int nota;
	string condicion;
	
	// Lectura de datos
	nota = 10;
	
	// Proceso
	if(nota>=14){
		condicion = "Aprobado";
	} else {
		condicion = "Desaprobado";
	}
	
	// Reporte
	cout << "Nota: " << nota << endl;
	cout << "Condici�n: " << condicion;
	cout << endl; 
	
	// Fin
	system("pause");
	return 0;
}

