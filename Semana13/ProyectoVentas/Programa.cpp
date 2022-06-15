#include <iostream>
#include "utilitario.h"
#include "ToolBox.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	do{
		// Menu
		mostrarMenu();
		opMenu = leerOpcion(1,3);
		// Proceso del menú
		system("cls");
		switch(opMenu){
			case 1:
				procesarVentas();
				break;
			case 2:
				reporteEstadistico();
				break;
			case 3:
				procesoSalir();
				break;
		}
		// Pausa
		if(opMenu!=3){
			system("pause");
		}
	}while(opMenu!=3);
	// Fin
	return 0;
}
