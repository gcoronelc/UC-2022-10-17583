/*
 * Ejemplo de calcular el �rea del tri�ngulo
 * area = (base*altura)/2
*/

#include<iostream>
using namespace std;

int main()
{
	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
		
	// Declaraci�n de variables (seg�n el ejemplo)
	double area, base, altura;
	
	// Lectura de Datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================" << endl;	
	cout << "Ingrese base: ";    cin >> base;
	cout << "Ingrese altura: ";  cin >> altura;
	
	// Proceso
	area = (base * altura)/2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==========================" << endl;	
	cout <<"EL �rea del triangulo es: " << area << endl;
	cout << endl;
	
	return 0;
}





