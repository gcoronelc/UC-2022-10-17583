/*
INTEGRANTES DEL GRUPO
================================================
- Gustavo Coronel
- MATHIW JORDAN SEGURA FIGUEROA
- CARLOS MIGUEL OSORIO GUTIERREZ
- GHANDY ROBERTO VILCACHAGUA REFULIO
- VICTOR PATRICK QUINO JARA
- ENOLA AMPARO CHAVEZ HUANQUI
- EILEEN IGLESIAS LUNA
*/

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
		cout << "LA CASA DEL INKA" << endl;
		cout << "SISTEMA DE VENTAS" << endl << endl;
		cout << "Men� de Opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Reporte de ventas" << endl;
		cout << "3.- Salir" << endl;
		cout << "=================================================" << endl;
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>3){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>3);
		
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
	} while(opMenu<3);
	
	// Fin
	return 0;
}
