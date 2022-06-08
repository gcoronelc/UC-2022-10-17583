#include <iostream>
#include "ToolBox.h"
using namespace std;

// Funciones y Procedimientos
void mostrarMenu();
void procesarVenta();
void reporteEstadistico();
void finPrograma();
char leerTipoProducto();

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
	// Variables
	char sexo, tipo;
	double precio, porcDescuento;
	double montoBruto, descuento, montoNeto;
	int cantidad;
	// Lectura
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================================" << endl;
	sexo = leerSexo("Ingrese sexo del cliente: ");
	tipo = leerTipoProducto();
	precio = leerDouble("Ingrese precio:", 1);
	cantidad = leerEntero("Ingrese cantidad:", 2);
	// Proceso
	// Paso 1: DEterminar el porcentaje de descuento
	porcDescuento = 0.0;
	porcDescuento = (tipo=='A')?8:porcDescuento;
	porcDescuento = (tipo=='B')?10:porcDescuento;
	porcDescuento = (tipo=='C')?12:porcDescuento;
	porcDescuento = (tipo=='D')?15:porcDescuento;
	// Paso 2: Calculo de la venta
	montoBruto = precio * cantidad;
	descuento = montoBruto * porcDescuento / 1000;
	montoNeto = montoBruto - descuento;
	// Reporte de venta
	cout << endl;
	cout << "REPORTE DE VENTA" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Monto Bruto: " << montoBruto << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Monto neto: " << montoNeto << endl;
	cout << endl;
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

char leerTipoProducto(){
	char tipo;
	cout << "Tipo de Producto" << endl;
	cout << "-------------------------------" << endl;
	cout << "A. Mouse" << endl;
	cout << "B. Teclado" << endl;
	cout << "C. Disco Duro" << endl;
	cout << "D. Monitor" << endl;
	cout << "-------------------------------" << endl;
	do{
 		cout << "Opción: "; cin >> tipo;
 		tipo = toupper(tipo);
 		if(tipo!='A' && tipo!='B' && tipo!='C' && tipo!='D'){
 			cout << "Error, tipo incorrecto." << endl;
		 }
	}while(tipo!='A' && tipo!='B' && tipo!='C' && tipo!='D');	
	return tipo;
}
