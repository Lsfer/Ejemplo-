#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	//25 años de servicio y mayor a 65
	int anios, edad;
	cout << "Ingrese los años de servicio de la persona: ";
	cin >> anios;
	
	cout << "Ingrese la edad de la persona: ";
	cin >> edad;
	
	// AND && las dos deben cumplirse al mismo tiempo
	// alt + 38
	if(anios >= 25 && edad >= 65) {
		cout << "Ya se puede jubilar, felicidades";
	} else {
		cout << "Aun no puede jubilarse";
	}
	
	// OR ||
	//alt + 124
	int inscripcion, beca;
	cout << "Ingrese el metodo de inscripcion: " << endl;
	cout << "1. CUI o DPI" << endl;
	cout << "2. Pasaporte" << endl;
	cin >> inscripcion;
	cout << "Ingrese si tiene beca o no: " << endl;
	cout << "1. Si" << endl;
	cout << "0. No" << endl;
	cin >> beca;
	if (inscripcion > 0 || beca == 1){
		cout << "Bienvenido a universidad mesoamericana";
	} else {
		cout << "Complete su inscripcion por favor";
	}
	
	return 0;
}

