#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	double ventas, meta, porcComision, porcDescuento;
	double comision, bono, pagoTotal;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "SISTEMA DE PAGOS A VENDEDORES" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Enero - Marzo" << endl;
		cout << "2.- Abril – Junio" << endl;
		cout << "3.- Julio – Setiembre" << endl;
		cout << "4.- Octubre - Diciembre" << endl;
		cout << "5.- Salir" << endl;
		
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Varificar opción salir
		if(opMenu==5){
			cout << endl;
			cout << "Fin del programa." << endl;
			cout << endl;
			return 0;
		}
		
		
		// Lectura de datos
		system("cls");
		cout << "Lectura de Datos" << endl;
		cout << "=========================================" << endl;
		cout << "Ventas: "; cin >> ventas;
		
		// Proceso
		switch(opMenu){
			case 1:
				meta = 80000.00;
				porcComision = 0.10;
				porcDescuento = 0.03;
				break;
			case 2:
				meta = 80000.00;
				porcComision = 0.10;
				porcDescuento = 0.03;
				break;	
			case 3:
				meta = 80000.00;
				porcComision = 0.10;
				porcDescuento = 0.03;
				break;					
			case 4:
				meta = 100000.00;
				porcComision = 0.16;
				porcDescuento = 0.08;
				break;
		}
		comision = (ventas>meta?meta:ventas) * porcComision;
		bono = (ventas>meta?ventas-meta:0)*porcDescuento;
		pagoTotal = comision +bono;
		
		// Reporte
		cout << endl;
		cout << "REPORTE"<< endl;
		cout << "=================================" << endl;
		cout << "Comisión: " << comision << endl;
		cout << "Bono: " <<  bono << endl;
		cout << "Importe a pagar: " << pagoTotal << endl;
		cout << endl;
		
		
		
		system("pause");
	} while(opMenu!=5);
	
	// Fin
	return 0;
}
