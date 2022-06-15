#include <iostream>
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
	return 10;
}

void procesarVentas(){
	// Variables
	double precio, importe, total;
	double porcDescuento, descuento;
	int cantidad;
	
	// Lectura
	cout << "PROCESAR VENTA" << endl;
	cout << "Datos de la venta" << endl;
	precio = leerDouble("Ingrese el precio: ", precio);
	cantidad = leerEntero("Ingresela cantidad: ", cantidad);
	// Proceso
	porcDescuento = fnPorcDescuento(cantidad);
	importe = precio * cantidad;
	descuento = importe * porcDescuento;
	total = importe - descuento;
	
	// Reporte
	
}
