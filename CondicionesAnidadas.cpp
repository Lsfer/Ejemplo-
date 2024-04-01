#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Irme a vivir solo. 
	//Resolucion de problemas con condiciones anidadas
	cout << "¿Estoy vivo? 1. Si, 2. No";
	int vivo;
	cin >> vivo;
	if (vivo == 1) {
		cout <<"Si esta vivo, vamos a buscar apartamento";
		cout << endl;
		cout << "Tengo un sueldo? 1. Si, 2. No";
		int sueldo;
		cin >> sueldo;
		if (sueldo == 1) {
			cout << "Si hay sueldo, cuanto es? ";
			double dinero;
			cin >> dinero;
			cout << "Cuanto es del apartamento? ";
			double dinero_apartamento;
			cin >> dinero_apartamento;
			if (dinero > dinero_apartamento) {
				cout << "Si le alcanza, firme contrato";
			}
			else {
				cout << "No le alcanza, no firme";
			}
		}
		else {
			cout << "No hay sueldo ";
		}
	} 
	else {
		cout << "No esta vivo";
	}
	//Ya no seguimos escribiendo para abajo
	return 0;
}

