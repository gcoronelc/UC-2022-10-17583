#include <iostream>
using namespace std;

// Variables globales

// Prototipo de funciones y procedimientos
void mostrarMenu();
int leerOpcion(int opMin, int opMax);
void procesarVenta();
void reporteVentas();
void salir();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso general
	do{
		// El menú
		mostrarMenu();
		opMenu = leerOpcion(1,3);
		// Proceso general
		system("cls");
		switch(opMenu){
			case 1:
				procesarVenta();
				break;
			case 2:
				reporteVentas();
				break;
			case 3:
				salir();
				break;
		}		// Fin
		system("pause");
	} while(opMenu!=3);
	
	// Fin
	return 0;
}

// Implementación del menú
void mostrarMenu(){
	system("cls");
	cout << "\tMENU DE OPCIONES" << endl;
	cout << "====================================" << endl;
	cout << "\t1.- Venta" << endl;
	cout << "\t2.- Reporte" << endl;
	cout << "\t3.- Salir" << endl;
	cout << "=====================================" << endl;
}

int leerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opción: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opción fuera de rango." << endl;
		}
	} while(op<opMin || op>opMax);
	return op;
}

void procesarVenta(){
	
}
void reporteVentas(){
	cout << "Algo";
	
}
void salir(){
	cout << "PROCESO SALIR" << endl;
	cout << "================================================" << endl;
	cout << "Fin del programa" << endl;
	cout << "Nos vemos en el mundial" << endl;
}










