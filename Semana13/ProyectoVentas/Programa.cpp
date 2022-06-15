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
		
		
		// Pausa
		if(opMenu!=3){
			system("pause");
		}
	}while(opMenu!=3);
	// Fin
	return 0;
}
