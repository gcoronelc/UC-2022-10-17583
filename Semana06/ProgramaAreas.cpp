#include<iostream>
using namespace std;

int main()
{
	// Configuraci?n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	double ladoCuadrado, areaCuadrado;
	
	// Control del men?
	do{
		
		// Mostrar el men?
		system("cls");
		cout << "======================================" << endl;
		cout << "\tMENU DE AREAS" << endl;
		cout << "======================================" << endl;
		cout << "1.- Area de un cuadrado" << endl;
		cout << "2.- Area de un rectangulo" << endl;
		cout << "3.- Area de un triangulo" << endl;
		cout << "4.- Salir" << endl;
		cout << "======================================" << endl;
		
		// Leer la opci?n
		do{
			cout << endl;
			cout << "Opci?n? "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: opci?n incorrecta." << endl;
			}
		} while(opMenu<1 || opMenu>4);
		
		
		// Programaci?n del men?
		system("cls");
		switch(opMenu){
			case 1:
				// Lectura de datos
				cout << "Lectura de datos" << endl;
				cout << "----------------------------------" << endl;
				cout << "Valor del lado: "; cin >> ladoCuadrado;
				// Proceso
				areaCuadrado = ladoCuadrado * ladoCuadrado;
				// Reporte
				cout << endl;
				cout << "Reporte" << endl;
				cout << "----------------------------------" << endl;
				cout << "Valor del lado: " << ladoCuadrado << endl;
				cout << "Valor del area: " << areaCuadrado << endl;
				cout << endl;
				break;
			case 2:
				cout << "Falta" << endl;
				cout << endl;
				break;
			case 3:
				cout << "Falta" << endl;
				cout << endl;
				break;
			case 4:
				cout << endl;
				cout << "Fin del programa." << endl;
				cout << endl;
				break;								
		}
		
		
		system("pause");
	} while(opMenu!=4);
	
	
	return 0;
}

