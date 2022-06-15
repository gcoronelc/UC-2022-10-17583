#include <iostream>
#include "ToolBox.h"
using namespace std;


void mostrarMenu(){
	system("cls");
	cout << "MENU DE VENTAS" << endl;
	cout << "=====================================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Reporte estadistico" << endl;
	cout << "3.- Salir" << endl;
	cout << "=====================================" << endl;
}

double fnPorcDescuento(int cantidad){
	double porcentaje = 0.0;
	porcentaje = (cantidad>10 && cantidad<=25)?1:porcentaje;
	porcentaje = (cantidad>25 && cantidad<=100)?2:porcentaje;
	porcentaje = (cantidad>100)?4:porcentaje;
	return porcentaje;
}

void procesarVentas(){
	// Variables
	double precio, importe, total;
	double porcDescuento, descuento;
	int cantidad;
	// Lectura
	cout << "PROCESAR VENTA" << endl;
	cout << "Datos de la venta" << endl;
   precio = leerDouble("Ingrese el precio: ", 1.0);
	cantidad = leerEntero("Ingresela cantidad: ", 1);
	// Proceso
	porcDescuento = fnPorcDescuento(cantidad);
	importe = precio * cantidad;
	descuento = importe * porcDescuento / 100;
	total = importe - descuento;
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==============================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "Porcentaje de descuento: " << porcDescuento << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total: " << total << endl;
	cout << endl;
	
}
