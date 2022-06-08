#include <iostream>
using namespace std;

// Variables globales
int cantPuntaCana=0, cantSanAndres=0, cantCancun=0;
double totalPuntaCana=0.0, totalSanAndres=0.0, totalCancun=0.0;
double totalAcumulado=0.0;

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

int LeerEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

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
	// Vriables
	int paquete, cantidad;
	double precio, porcDescuento;
	double importe, descuento, total;
	// Lectura
	cout << "PAQUETE TURISTICO" << endl;
	cout << "================================" << endl;
	cout << "1.- Punta cana" << endl;
	cout << "2.- San Adres" << endl;
	cout << "3.- Cancun" << endl;
	cout << "----------------------" << endl;
	paquete = leerOpcion(1,3);
	cantidad = LeerEntero("Cantidad: ",1);
	// Proceso
	// 1.- Determinar el precio y el porcentaje
	switch(paquete){
		case 1:
			precio = 780.0;
			porcDescuento = 3.5;
			break;
		case 2:
			precio = 1350.0;
			porcDescuento = 4.0;
			break;
		case 3:
			precio = 2550.0;
			porcDescuento = 4.5;
			break;
	}
	// 2.- Calculos de la venta
	importe = precio * cantidad;
	descuento = importe * porcDescuento / 100.0;
	total = importe - descuento;
	// 3.- Estadistica
	cantPuntaCana += (paquete==1)?cantidad:0;
	cantSanAndres += (paquete==2)?cantidad:0;
	cantCancun += (paquete==3)?cantidad:0;
	totalPuntaCana += (paquete==1)?total:0;
	totalSanAndres += (paquete==2)?total:0;
	totalCancun += (paquete==3)?total:0;
	totalAcumulado += total;
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "================================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "Porc. descuento: " << porcDescuento << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total: " << total << endl;
	cout << endl;
}

void reporteVentas(){
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==============================================================" << endl;
	cout << "PQUETE\t\tCANTIDAD\tIMPORTE" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Punta Cana\t\t" << cantPuntaCana << "\t\t" << totalPuntaCana << endl;
	cout << "San Andrea\t\t" << cantSanAndres << "\t\t" << totalSanAndres << endl;
	cout << "Cancun\t\t\t" << cantCancun << "\t\t" << totalCancun << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Total acumulado: " << totalAcumulado << endl;
	cout << endl;
}
void salir(){
	cout << "PROCESO SALIR" << endl;
	cout << "================================================" << endl;
	cout << "Fin del programa" << endl;
	cout << "Nos vemos en el mundial" << endl;
}










