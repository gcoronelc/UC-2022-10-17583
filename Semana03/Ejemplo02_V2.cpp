// Enola Amparo Chavez Huanqui

/*
ESTRUCTURA IF
-----------------------------

if( condicion ){
instrucciones1;
} else {
instrucciones2;
}

*/

#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){

// Configuracion
setlocale(LC_CTYPE,"Spanish");

// Variables
int nota;
string condicion;

// Lectura de datos
// Nota aleatoria entre 0 y 20 inclusive.
srand(time(NULL));
// nota = rand() % 21;
nota = rand() % 20 + 1; // nota aleatoria entre 1 y 20

// Proceso
if(nota>=14){
condicion = "Aprobado";
} else {
condicion = "Desaprobado";
}

// Reporte
cout << "Nota: " << nota << endl;
cout << "Condición: " << condicion;
cout << endl;

// Fin
system("pause");
return 0;
}

