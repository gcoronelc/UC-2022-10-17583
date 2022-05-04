// Estudiante: Eric Gustavo Coronel Castillo

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, contVentas, cantidad;
	char categoria;
	double precio, porcComision;
	double importeVenta, importeComision, importeTotal;
	
	// Inicializa variables
	contVentas = 0;
	
	// Control del men� de opciones
	do{
		// EL MENU
		system("cls");
		cout << "SOBRE RUEDAS SAC" << endl;
		cout << "Man� de opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas1" << endl;
		cout << "3.- Resumen de ventas" << endl;
		cout << "4.- Salir" << endl;
		cout << "=================================================" << endl;
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			case 1:
				// CONTADOR DE VENTAS
				contVentas++;
				// LECTURA DE DATOS
				cout << "SOBRE RUEDAS SAC" << endl;
				cout << "Venta Nro. " << contVentas << endl;
				cout << "LECTURA DE DATOS" << endl;
				cout << "=====================================" << endl;
				// Leer la categor�a
				do{
					cout << "Categor�a (A/B/C): "; cin >> categoria;
					categoria = toupper(categoria);
					if(categoria!='A' && categoria!='B' && categoria!='C'){
						cout << "ERROR: la categor�a de ser A, B o C." << endl;
					}
				} while(categoria!='A' && categoria!='B' && categoria!='C');
				// Leer la cantidad
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad<=0){
						cout << "ERROR: la cantidad es un valor positivo." << endl;
					}
				} while(cantidad<=0);
				// PROCESO
				// 1.- Obtener datos de la tabla
				switch(categoria){
					case 'A':
						precio = 55.0;
						porcComision = (cantidad<=10)?4.0:6.0;
						break;
					case 'B':
						precio = 75.0;
						porcComision = (cantidad<=10)?6.0:10.0;
						break;
					case 'C':
						precio = 93.0;
						porcComision = (cantidad<=10)?10.0:15.0;
						break;												
				}
				// 2.- Calculos de la venta
				importeVenta = precio * cantidad;
				importeComision = importeVenta * porcComision;
				// REPORTE DE LA VENTA
				cout << endl;
				cout << "REPORTE DE VENTA" << contVentas << endl;
				cout << "=====================================" << endl;	
				cout << "Precio por camioneta: US$" << precio << endl;
				cout << "Importe de venta: US$" << importeVenta << endl;
				cout << "Porentaje de comisi�n: " << porcComision << "%" << endl;
				cout << "Importe de comisi�n: US$" << importeComision << endl;
				cout << endl;	
				break;

			case 2:
				cout << "Proceso opci�n 2" << endl;
				break;	

			case 3:
				cout << "Proceso opci�n 3" << endl;
				break;					


			case 4:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
