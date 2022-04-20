#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	for(int i=1; i<=10; i++){
		cout << i  << ".- Alianza Campeon" << endl;
		if(i==5){
			break;
		}
	}
	
	
	// Fin
	system("pause");
	return 0;
}
