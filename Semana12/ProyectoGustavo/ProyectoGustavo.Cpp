#include <iostream>
#include "ToolBox.h"
using namespace std;

// Funciones y Procedimientos
void mostrarMenu();



int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	
	// Proceso Principal
	do{
		mostrarMenu();
		opMenu = leerOpcion(1,3);
		
		cout << "Opción = " << opMenu << endl << endl;
		
		system("pause");
	} while(opMenu!=3);
	
	
	// Fin
	system("pause");
	return 0;
}

void mostrarMenu(){
	system("cls");
	cout << "\tMENU DE OPCIONES" << endl;
	cout << "================================" << endl;
	cout << "\t1.- Registrar Venta" << endl;
	cout << "\t2.- Reporte Estadistico" << endl;
	cout << "\t3.- Salir" << endl;
	cout << "================================" << endl;
	cout << endl;
}
