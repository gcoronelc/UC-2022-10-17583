#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Control del men� de opciones
	do{
		// EL MENU
		system("cls");
		cout << "SISTEMA DE PAGOS A VENDEDORES" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Enero - Marzo" << endl;
		cout << "2.- Abril � Junio" << endl;
		cout << "3.- Julio � Setiembre" << endl;
		cout << "4.- Octubre - Diciembre" << endl;
		cout << "5.- Salir" << endl;
		
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Varificar opci�n salir
		if(opMenu==5){
			cout << endl;
			cout << "Fin del programa." << endl;
			cout << endl;
			return 0;
		}
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			// Opci�n 1: aaaa
			case 1:
				cout << "Proceso opci�n 1" << endl;
				break;
			// Opci�n 2: bbbbb
			case 2:
				cout << "Proceso opci�n 2" << endl;
				break;	
			// Opci�n 3: cccccccc
			case 3:
				cout << "Proceso opci�n 3" << endl;
				break;					
			// Opci�n 4: dddddddd
			case 4:
				cout << "Proceso opci�n 4" << endl;
				break;
			// Opci�n 5: Salir
			case 5:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu!=5);
	
	// Fin
	return 0;
}
