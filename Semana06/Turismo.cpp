#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, cantPersonas;
	double precioPersona, porcDctoPersona, dctoPersona;
	double totalPagar, importeVenta, impuesto;
	
	// Control del menú de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << "SISTEMA DE TURISMO CONTINENTAL" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Punta Cana" << endl;
		cout << "2.- San Andrés" << endl;
		cout << "3.- Cancún" << endl;
		cout << "4.- Salir" << endl;
		cout << "=================================================" << endl;
		
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Validar menu
		if(opMenu==4){
			cout << endl;
			cout << "Fin del programa." << endl;
			cout << endl;
			return 0;
		}
		
		// Lectura de datos
		system("cls");
		cout << "Lectura de datos" << endl;
		cout << "==================================" << endl;
		cout << "Cantidad de personas: "; cin >> cantPersonas;
		
		// Procesar
		switch(opMenu){
			case 1:
				precioPersona = 780.0;
				porcDctoPersona = 3.5;
				break;
			case 2:
				precioPersona = 1350.0;
				porcDctoPersona = 4;
				break;	
			case 3:
				precioPersona = 2250.0;
				porcDctoPersona = 4.5;
				break;					
		}
		dctoPersona = precioPersona * (cantPersonas>4?porcDctoPersona:0)/100.0;
		totalPagar = (precioPersona - dctoPersona) * cantPersonas * 3.73;
		importeVenta = totalPagar / 1.18;
		impuesto = totalPagar - importeVenta;
		
		// Reporte
		cout << endl;
		cout << "Reporte de ventas" << endl;
		cout << "==================================" << endl;
		cout << "Destino turistico: " << "Cancún" << endl;
		cout << "Cantidad de paquetes: " << cantPersonas << endl;
		cout << "Importe de venta: " << importeVenta << " Soles" << endl;
		cout << "Impuesto: " << impuesto << " Soles" << endl;
		cout << "Total a pagar: " << totalPagar << " Soles" << endl;
		cout << endl;
		
		system("pause");
	} while(opMenu!=4);
	
	// Fin
	return 0;
}
