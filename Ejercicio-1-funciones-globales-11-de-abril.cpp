#include <iostream>
using namespace std;




void Mensaje1() {
	int opcion1; 
	cout << "Hola usted esta en Ingenieria en sistemas."  << endl; 
	
}

void Mesnaje2() {
	int opcion2; 
	cout << "Usted perdio progra 1. "  << endl;  
}

void Mensaje3() {
	int opcion3; 
	cout << "Hola mundo." << endl; 
	
}

void Mensaje4() {
	int opcion4; 
	cout << "¿Un League of Legens?."  << endl; 
	
}

void Mensaje5() {
	int opcion5; 
	cout << "salir del programa."  << endl; 
	
}

int main(int argc, char *argv[]) {
	int opcion;
	
	
	do{
		cout << "1. opcion1" << endl; 
		cout << "2. opcion2" << endl; 
		cout << "3. opcion3" << endl; 
		cout << "4. opcion4" << endl; 
		cout << "5. opcion5" << endl;
		cout << "Hola elija una opcion del 1 al 5. " << endl; 
		
		cin >> opcion;
			switch (opcion) {
			case 1: 
				Mensaje1(); 
				break; 
			case 2: 
				Mesnaje2(); 
				break; 
			case 3: 
				Mensaje3(); 
				break; 
			case 4: 
				Mensaje4(); 
				break; 
			case 5: 
				Mensaje5(); 
				break; 
			default: 
				cout << "esta opcion no es valida :)" << endl; 
				break; 
		}
	} while(opcion !=5);
	return 0;
}

