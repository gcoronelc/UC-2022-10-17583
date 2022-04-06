/*
OPERADOR TERNARIO

	x = (condicion)?expresion1:expresion2;
	
	queAlmuerzo = (Hoy es lunes)?"Chambar Trujillano":"Caldo de Gallina";
	
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b, c;
	
	// Lectura de datos
	a = 10;
	b = 30;
	
	// Proceso
	c = (a>b)?500:600;
	
	// Reporte
	cout << "C: " << c << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

