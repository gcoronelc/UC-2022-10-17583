#include <iostream>
#include "ToolBox.h"
using namespace std;

// Funciones y Procedimientos
void mostrarMenu();
void procesarVenta();
void reporteEstadistico();
void finPrograma();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	
	// Proceso Principal
	do{
		// Menú
		mostrarMenu();
		opMenu = leerOpcion(1,3);
		// Procesar el menú
		system("cls");
		switch(opMenu){
			case 1:
				procesarVenta();
				break;
			case 2:
				reporteEstadistico();
				break;
			case 3:
				finPrograma();
				break;
		}
		
		if(opMenu!=3){
			system("pause");
		}
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

void procesarVenta(){
	cout << "Falta ..." << endl;
}

void reporteEstadistico(){
	cout << "Falta ..." << endl;	
}

void finPrograma(){
	cout << endl;
	cout << "FIN DEL PROGRAMA" << endl;
	cout << "Esperamos su pronta visita." << endl;
	cout << "Que tenga un excelente día." << endl;
	cout << endl;
}

