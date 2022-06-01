#include <iostream>
using namespace std;

// Variables globales

// Prototipo de funciones y procedimientos
void mostrarMenu();


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso general
	do{
		mostrarMenu();
		
		
		system("pause");
	} while(false);
	
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
