#include<iostream>
using namespace std;


// Leer opci�n
int leerOpcion(int opMin, int opMax){
	int opcion;
	do{
		cout << "Opcion: "; cin >> opcion;
		if(opcion < opMin || opcion > opMax){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion < opMin || opcion > opMax);
	return opcion;
}


