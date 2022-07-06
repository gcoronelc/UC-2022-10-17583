#include <iostream>
#include "ToolBox.h"
using namespace std;


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

void ProcesarVenta(){
	cout << "Procesar venta." << endl;	
}

void ReporteVentas(){
	cout << "Ventas ok." << endl;
}


void FinDelPrograma(){
	cout << "Fin del programa." << endl;
	cout << "Eso ha sido todo." << endl;
	cout << endl;
}
