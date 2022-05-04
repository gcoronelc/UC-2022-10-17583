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
	double importeVenta, importeComision;
	
	// Inicializa variables
	contVentas = 0;
	
	// Variables del reporte
	int catACantVentas=0, catBCantVentas=0, catCCantVentas=0;
	int catACamionetas=0, catBCamionetas=0, catCCamionetas=0;
	double catAImporte=0, catBImporte=0, catCImporte=0;
	double catAComision=0, catBComision=0, catCComision=0;
	
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
				// CONTADOR DE VENTAS
				contVentas++;
				// LECTURA DE DATOS
				cout << "SOBRE RUEDAS SAC" << endl;
				cout << "Venta Nro. " << contVentas << endl;
				cout << "LECTURA DE DATOS" << endl;
				cout << "=====================================" << endl;
				// Leer la categoría
				do{
					cout << "Categoría (A/B/C): "; cin >> categoria;
					categoria = toupper(categoria);
					if(categoria!='A' && categoria!='B' && categoria!='C'){
						cout << "ERROR: la categoría de ser A, B o C." << endl;
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
				cout << "Porentaje de comisión: " << porcComision << "%" << endl;
				cout << "Importe de comisión: US$" << importeComision << endl;
				cout << endl;
				// ACTUALIZAR VARIABLES DEL RESUMEN DE VENTAS
				catACantVentas += (categoria=='A')?1:0;
				catBCantVentas += (categoria=='B')?1:0;
				catCCantVentas += (categoria=='C')?1:0;
				catACamionetas += (categoria=='A')?cantidad:0;
				catBCamionetas += (categoria=='B')?cantidad:0;
				catCCamionetas += (categoria=='C')?cantidad:0;
				catAImporte += (categoria=='A')?importeVenta:0;
				catBImporte += (categoria=='B')?importeVenta:0;
				catCImporte += (categoria=='C')?importeVenta:0;
				catAComision += (categoria=='A')?importeComision:0;
				catBComision += (categoria=='B')?importeComision:0;
				catCComision += (categoria=='C')?importeComision:0;
				break;

			case 2:
				cout << "Proceso opción 2" << endl;
				break;	

			case 3:
				cout << endl;
				cout << "RESUMEN DE VENTAS" << contVentas << endl;
				cout << "=====================================" << endl << endl;	
				cout << "CATEGORIA\tVENTAS\tCAMIONETAS\tIMPORTE\t\tCOMISION" << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cout << "     A   \t" << catACantVentas << "\t" << catACamionetas << "\t\t" << catAImporte << "\t\t" << catAComision << endl;
				cout << "     B   \t" << catBCantVentas << "\t" << catBCamionetas << "\t\t" << catBImporte << "\t\t" << catBComision << endl;
				cout << "     C   \t" << catCCantVentas << "\t" << catCCamionetas << "\t\t" << catCImporte << "\t\t" << catCComision << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cout << endl;
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
