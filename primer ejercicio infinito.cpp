#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1; 
	
	do {
		cout << "hola estudiantes"; 
		cout << endl;
		cout << "vienvenidos al ciclo"; 
		cout << "¿desea repetir? 1. Si , 2. NO"; 
		cin >> control;
		
	} while(control = 1); 
	cout << "salimos del ciclo"; 
	return 0;
}

