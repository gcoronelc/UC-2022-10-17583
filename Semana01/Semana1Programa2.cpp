/*
 * Lectura de diferentes tipos de datos
*/

#include<iostream>
using namespace std;

int main()
{
	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	string nombre;
	char genero;
	int nota1, nota2;
	double promedioSinDecimal, promedioConDecimal;
	
	// Lectura de datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "===============================================" << endl;	
	cout << "Ingrese nombre de estudiante: "; cin >> nombre;
	cout << "Ingrese genero: ";               cin >> genero;
	cout << "Ingrese nota 1: ";               cin >> nota1;
	cout << "Ingrese nota 2: ";               cin >> nota2;
	
	// Proceso
	promedioSinDecimal = (nota1 + nota2)/2;
	promedioConDecimal = (nota1 + nota2)/2.0;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===============================================" << endl;	
	cout << "El promedio es: " << promedioSinDecimal << endl;
	cout << "El promedio es: " << promedioConDecimal << endl;
	cout << endl;
	
	system("pause");
	return 0;
}



