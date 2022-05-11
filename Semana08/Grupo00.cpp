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
	int opMenu, tipoPlato, cantidad, edad;
	double precio, porcDescuento1, porcDescuento2;
	char sexo;
	double importeBruto, descuento1, descuento2, importeNeto;
	
	// Variables de indicadores
	int cantTotalVentas=0, cantVentasMujeresDcto2=0, cantVentasHombresDcto1=0;
	double sumaTotalVentasBruto=0, sumaTotalVentasNeto=0, sumaTotalDescuentos=0; 	
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "LA CASA DEL INKA" << endl;
		cout << "SISTEMA DE VENTAS" << endl << endl;
		cout << "Menú de Opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Reporte de ventas" << endl;
		cout << "3.- Salir" << endl;
		cout << "=================================================" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>3){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>3);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			// Opción 1: Venta
			case 1:
				// Cabecera
				cout << "LA CASA DEL INKA" << endl;
				cout << "SISTEMA DE VENTAS" << endl << endl;
				cout << "LECTURA DE DATOS" << endl;
				cout << "============================================" << endl;
				// Leer el tipo de plato
				cout << "TIPO DE PLATO" << endl;
				cout << "\t1.- Carnes" << endl;
				cout << "\t2.- Pescados" << endl;
				cout << "\t3.- Vinos" << endl;
				do{
					cout << "Opción: "; cin >> tipoPlato;
					if(tipoPlato<1 || tipoPlato>3){
						cout << "ERROR: tipo de plato incorrecto." << endl;
					}
				}while(tipoPlato<1 || tipoPlato>3);
				// Leer precio
				do{
					cout << "Precio: "; cin >> precio;
					if(precio<=0.0){
						cout << "ERROR: el precio es un valor positivo." << endl;
					}
				}while(precio<=0.0);
				// Leer cantidad
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad<=0){
						cout << "ERROR: la cantidad es un valor positivo." << endl;
					}
				}while(cantidad<=0);
				// Leer sexo
				do{
					cout << "Sexo (M/F): "; cin >> sexo;
					sexo = toupper(sexo);
					if(sexo!='M' && sexo!='F'){
						cout << "ERROR: ingrese M o F." << endl;
					}
				}while(sexo!='M' && sexo!='F');
				// Leer edad
				do{
					cout << "Edad: "; cin >> edad;
					if(edad<=0 || edad>120){
						cout << "ERROR: ingrese un valor correcto." << endl;
					}
				}while(edad<=0 || edad>120);
				// PROCESO
				// Encontrar el % de descuento 1
				switch(tipoPlato){
					case 1:
						porcDescuento1 = 0.0;
						porcDescuento1 = (cantidad>=5 && cantidad<=10)?5:porcDescuento1;
						porcDescuento1 = (cantidad>10)?8:porcDescuento1;
						break;
					case 2:
						porcDescuento1 = 0.0;
						porcDescuento1 = (cantidad>=5 && cantidad<=10)?6:porcDescuento1;
						porcDescuento1 = (cantidad>10)?10:porcDescuento1;
						break;
					case 3:
						porcDescuento1 = 0.0;
						porcDescuento1 = (cantidad>=5 && cantidad<=10)?8:porcDescuento1;
						porcDescuento1 = (cantidad>10)?14:porcDescuento1;
						break;												
				}
				// Encontrar el % de descuento 1
				switch(sexo){
					case 'M':
						porcDescuento2 = 0.0;
						porcDescuento2 = (edad>=30 && edad<=40)?6:porcDescuento2;
						porcDescuento2 = (edad>40)?8:porcDescuento2;
						break;
					case 'F':
						porcDescuento2 = 0.0;
						porcDescuento2 = (edad>=30 && edad<=40)?8:porcDescuento2;
						porcDescuento2 = (edad>40)?10:porcDescuento2;
						break;
				}
				// Calculo de la venta
				importeBruto = precio * cantidad;
				descuento1 = importeBruto * porcDescuento1 / 100.0;
				descuento2 = importeBruto * porcDescuento2 / 100.0;
				importeNeto = importeBruto - descuento1 - descuento2;
				// REPORTE
				cout << endl;
				cout << "REPORTE" << endl;
				cout << "==============================================" << endl;
				cout << "Importe bruto: " << importeBruto << endl;
				cout << "Descuento 1: " << descuento1 << endl;
				cout << "Descuento 2: " << descuento2 << endl;
				cout << "Importe neto: " << importeNeto << endl;
				cout << endl;
				// Actualizar indicadores
				cantTotalVentas++;
				cantVentasMujeresDcto2 += (sexo=='F' && descuento2>0)?1:0;
				cantVentasHombresDcto1 += (sexo=='M' && descuento1>0)?1:0;
				sumaTotalVentasBruto += importeBruto;
				sumaTotalVentasNeto += importeNeto;
				sumaTotalDescuentos += (descuento1 + descuento2);
				break;
				
			// Opción 2: Reporte
			case 2:
				cout << "REPORTE DE INDICADORES" << endl;
				cout << "=======================================================================" << endl;
				cout << "Cantidad total de ventas: " << cantTotalVentas << endl;
				cout << "Cantidad de ventas a clientes femeninos con el segundo descuento: " << cantVentasMujeresDcto2 << endl;
				cout << "Cantidad de ventas a clientes masculinos solo con el primer descuento: " << cantVentasHombresDcto1 << endl;
				cout << "Suma total de las ventas (Importe Bruto): " << sumaTotalVentasBruto << endl;
				cout << "Suma total de las ventas (Importe Neto): " << sumaTotalVentasNeto << endl;
				cout << "Suma de todos los descuentos realizados: " << sumaTotalDescuentos << endl;
				cout << endl;
				break;	
			// Opción 3: Salir
			case 3:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<3);
	
	// Fin
	return 0;
}
