#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int nota, rango, factor, i, bono;
	
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=========================================" << endl;
	cout << "Nota: "; cin >> nota;
	
	// Validación
	if(nota<0 || nota>20){
		cout << endl;
		cout << "ERROR" << endl;
		cout << "=====================================" << endl;
		cout << "La nota esta fuera de rango." << endl;
		cout << "El rango es: [0,20]." << endl;
		cout << endl;
		return 0;
	}
	
	// Proceso
	for(i=1; i<=4; i++){
		switch(i){
			case 1:
				rango=5;
				factor=50;
				break;
			case 2:
				rango=7;
				factor=80;
				break;
			case 3:
				rango=5;
				factor=120;
				break;
			case 4:
				rango=3;
				factor=150;
				break;												
		}
		if(rango>nota){
			rango=nota;
			nota=0;
		} else {
			nota = nota - rango;
		}
		bono = bono + rango * factor;
	}
	
	// Reporte
	cout << endl;
	cout << "REPORTE DE COMPENSACION" << endl;
	cout << "=============================================" << endl;
	cout << "Compensación: " << bono << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
