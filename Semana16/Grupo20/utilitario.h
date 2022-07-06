#include <iostream>
#include "ToolBox.h"
using namespace std;

// Variables globales
int contVentas = 0;


void MostrarMenu(){
	system("cls");
	cout << "   EL PESCADOR" << endl;
	cout << "   Menú de opciones" << endl;
	cout << "============================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "============================" << endl;
	cout << endl;
}

void MostrarMenuProducto(){
	cout << "TIPO DE PRODUCTO" << endl;
	cout << "--------------------------" << endl;
	cout << "1.- Ceviches" << endl;
	cout << "2.- Sudados" << endl;
	cout << "3.- Jaleas" << endl;
	cout << "4.- Bebidas" << endl;
	cout << "--------------------------" << endl;
}
void ProcesarVenta(){
	// Variables locales
	int tipoProducto;
	string descripcion;
	double precio;
	// Cabecera
	cout << "   EL PESCADOR" << endl;
	cout << "   Procesar venta" << endl;
	cout << "   Venta Nro. " << (contVentas+1) << endl;
	cout << "============================" << endl;
	cout << endl;
	// Lectura de datos	
	MostrarMenuProducto();
	tipoProducto = leerOpcion(1,4);
	cout << "Decripción: "; cin >> descripcion;
	precio = leerDouble("Precio: ",1.0);
}

void ReporteVentas(){
	cout << "Ventas ok." << endl;
}


void FinDelPrograma(){
	cout << "Fin del programa." << endl;
	cout << "Eso ha sido todo." << endl;
	cout << endl;
}
