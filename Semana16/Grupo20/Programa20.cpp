#include <iostream>
#include "utilitario.h"
using namespace std;

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables locales
	int op;
	// Proceso principal
	do{
		// Menu
		MostrarMenu();
		op = leerOpcion(1,3);
		// Procesar el menú
		system("cls");
		switch(op){
			case 1:
				ProcesarVenta();
				break;
			case 2:
				ReporteVentas();
				break;
			case 3:
				FinDelPrograma();
				break;
		}
		// Pausa
		if(op!=3){
			system("pause");
		}
	} while(op!=3);
		
	// Fin
	return 0;
}
