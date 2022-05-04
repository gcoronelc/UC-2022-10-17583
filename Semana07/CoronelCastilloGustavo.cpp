// Estudiante: Eric Gustavo Coronel Castillo

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, contVentas;
	
	// Inicializa variables
	contVentas = 0;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "SOBRE RUEDAS SAC" << endl;
		cout << "Manú de opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas1" << endl;
		cout << "3.- Resumen de ventas" << endl;
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
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			case 1:
				contVentas++;
				cout << "SOBRE RUEDAS SAC" << endl;
				cout << "Venta Nro. " << contVentas << endl;
				break;
			// Opción 2: bbbbb
			case 2:
				cout << "Proceso opción 2" << endl;
				break;	
			// Opción 3: cccccccc
			case 3:
				cout << "Proceso opción 3" << endl;
				break;					
			// Opción 4: dddddddd
			case 4:
				cout << "Proceso opción 4" << endl;
				break;
			// Opción 5: Salir
			case 5:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
