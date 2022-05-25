#include <iostream>
using namespace std;


int LeerEntero(string etiqueta){
	int valor;
	cout << etiqueta;
	cin  >> valor;
	return valor;
}

int LeerEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

int LeerEntero(string etiqueta, int valorMinimo, int valorMaximo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo || valor>valorMaximo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo || valor>valorMaximo);
	return valor;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad, cantidad, peso;
	
	// Lectura de datos
	cout << endl;
	edad = LeerEntero("Ingrese edad: ",1,120);
	cantidad = LeerEntero("Ingrese cantidad: ", 1);
	peso = LeerEntero("Ingrese peso: ",0);
	

	// Reporte
	cout << endl;
	cout << "Edad: " << edad << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Peso: " << peso << endl;
	cout << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
