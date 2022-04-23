/*
Plantilla para crear un men�
*/
#include<iostream>
using namespace std;

int main()
{
	int op;
	
	do{
		system("cls");
		cout << "=======================" << endl;
		cout << "-------- MENU ---------"<<endl;
		cout << "=======================" << endl;
		cout << "1. Procesar ..."<<endl;
		cout << "2. Ejecutar reporte"<<endl;
		cout << "3. Salir"<<endl;
		cout << endl;
		
		// Lectura de opci�n
		do{
			cout<<"Ingrese opcion: "; cin>>op;		
			if(op<1 || op>3){
				cout << "ERROR, debe 1, 2 o 3. Vuelve a Ingresar." << endl;
			}
		}while(op<1 || op>3);  // Es para Validar el ingreso de op
				
		// Procesar opci�n del men�
		system("cls");
		switch(op){  
		
			// Opci�n 1
			case 1: 
				cout << "Procesar ...." << endl;
				break;
				
			// Opci�n 2	
			case 2: 
				cout << "Reporte de ...." << endl;
				break;
							
			// Opci�n 3		
			case 3: 
				cout << "Gracias..!. Vuelva pronto." << endl;   	
				break;
		}
		
		system("pause");			
	}while(op != 3);  // Es para repetir el men� (repetir el proceso)
	cout << endl;
	
	// Fin
	return 0;
}
