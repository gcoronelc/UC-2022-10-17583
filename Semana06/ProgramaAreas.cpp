#include<iostream>
using namespace std;

int main()
{
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Control del men�
	do{
		
		// Mostrar el men�
		system("cls");
		cout << "======================================" << endl;
		cout << "\tMENU DE AREAS" << endl;
		cout << "======================================" << endl;
		cout << "1.- Area de un cuadrado" << endl;
		cout << "2.- Area de un rectangulo" << endl;
		cout << "3.- Area de un triangulo" << endl;
		cout << "4.- Salir" << endl;
		cout << "======================================" << endl;
		
		// Leer la opci�n
		do{
			cout << endl;
			cout << "Opci�n? "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: opci�n incorrecta." << endl;
			}
		} while(opMenu<1 || opMenu>4);
		
		
		// Reporte previo.
		cout << endl;
		cout << "Opci�n: " << opMenu << endl;
		
		
		system("pause");
	} while(opMenu!=4);
	
	
	return 0;
}

