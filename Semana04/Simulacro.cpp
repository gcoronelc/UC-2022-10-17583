#include <iostream>
#include <sstream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char categoria;
	double precioUnitario;
	int cantidad, datosValidos;
	stringstream errores;
	double porcDescuento, descuento, porcBono, bono;
	double importeVenta, importePagar;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===================================================" << endl;
	cout << "Categoría (A/B/C/D/E): "; cin >> categoria;
	cout << "Precio unitario: "; cin >> precioUnitario;
	cout << "Cantidad: "; cin >> cantidad;
	
	// Validación
	datosValidos = 1; // Asumo que los datos son correctos
	categoria = toupper(categoria);
	if(categoria!='A' && categoria!='B' && categoria!='C' && categoria!='D' && categoria!='E'){
		datosValidos = -1;
		errores << "ERROR: categoría incorrecta, debe ser A, B, C, D o E." << endl;
	}
	if(precioUnitario<=0.0){
		datosValidos = -1;
		errores << "ERROR: precio unitario debes ser un valor positivo." << endl;
	}
	if(precioUnitario<=0.0){
		datosValidos = -1;
		errores << "ERROR: cantidad debes ser un valor positivo." << endl;
	}
	if(datosValidos==-1){
		cout << endl;
		cout << "ERROR" << endl;
		cout << "===========================================================" << endl;
		cout << errores.str() << endl;
		return 0;
	}
	
	// Proceso
	switch(categoria){
		case 'A':
			porcDescuento = 0.04;
			porcBono = 0.08;
			break;
		case 'B':
			porcDescuento = 0.08;
			porcBono = 0.10;
			break;
		case 'C':
			porcDescuento = 0.12;
			porcBono = 0.14;
			break;
		case 'D':
			porcDescuento = 0.18;
			porcBono = 0.18;
			break;
		case 'E':
			porcDescuento = 0.20;
			porcBono = 0.25;
			break;											
	}
	importeVenta = precioUnitario * cantidad;
	descuento = importeVenta * porcDescuento;
	importePagar = importeVenta - descuento;
	bono = importeVenta * porcDescuento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================================" << endl;
	cout << "Importe venta: " << importeVenta << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Importe pagar: " << importePagar << endl;
	cout << "Bono: " << bono << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
