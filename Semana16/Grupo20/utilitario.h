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

double calcPorcDcto1(int tipoProducto){
	double porcDcto = 0.0;
	porcDcto = (tipoProducto==1)?5.0:porcDcto;
	porcDcto = (tipoProducto==2)?6.0:porcDcto;
	porcDcto = (tipoProducto==3)?4.0:porcDcto;
	porcDcto = (tipoProducto==4)?2.0:porcDcto;
	return porcDcto;
}

double calcPorcDcto2(char sexo, int edad){
	double porcDcto = 0.0;
	porcDcto = (sexo=='M' && edad>50)?4.0:porcDcto;
	porcDcto = (sexo=='F' && edad>50)?4.0:porcDcto;
	return porcDcto;
}

void ProcesarVenta(){
	// Variables locales
	int tipoProducto, cantidad, edad;
	string descripcion;
	double precio, porcDcto1, porcDcto2;
	char sexo;
	double importe, descuento1, descuento2, totalPagar;
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
	cantidad = leerEntero("Cantidad: ", 1);
	sexo = leerSexo("Sexo (M/F): ");
	edad = leerEntero("Edad [1,120]: ", 1, 120);
	// Los porcentajes de descuento
	porcDcto1 = calcPorcDcto1(tipoProducto);
	porcDcto2 = calcPorcDcto2(sexo,edad);
	// Calculo de la venta
	importe = precio * cantidad;
	descuento1 = importe * porcDcto1 / 100.0;
	descuento2 = importe * porcDcto2 / 100.0;
	totalPagar = importe - descuento1 - descuento2;
	// Reporte de la venta
	cout << endl;
	cout << "REPORTE DE VENTAS" << endl;
	cout << "==================================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "Descuento 1: " << descuento1 << endl;
	cout << "Descuento 2: " << descuento2 << endl;
	cout << "Total a pagar: " << totalPagar << endl;
	// Actualizar variables globales
	contVentas++;
}

void ReporteVentas(){
	cout << "Ventas ok." << endl;
}


void FinDelPrograma(){
	cout << "Fin del programa." << endl;
	cout << "Eso ha sido todo." << endl;
	cout << endl;
}
