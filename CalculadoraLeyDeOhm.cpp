#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	//Calculadora de resistencias
	int opcion = 0;
	float voltaje;
	float corriente;
	float resistencia;
	bool resistencia_grande = false;
	string valor;
	cout << "Ingrese que quiere hacer: " << endl;
	cout << "1. Calcular resistencia\n";
	cout << "2. Calcular voltaje\n";
	cout << "3. Calcular corriente" << endl;
	cin >> opcion;
	if (opcion == 1){
		cout << "calculo de resistencia: " << endl;
		cout << "Ingrese voltaje: ";
		cin >> voltaje;
		cout << "Ingrese corriente: ";
		cin >> corriente;
		resistencia = (voltaje/corriente);
		if (resistencia > 1000) {
			resistencia_grande = true;
		}
		cout << "La resistencia es: " << resistencia << endl;
	}
	if (opcion == 2){
		cout << "calculo de voltaje: " << endl;
		cout << "Ingrese resistencia: ";
		cin >> resistencia;
		cout << "Ingrese corriente: ";
		cin >> corriente;
		voltaje = (resistencia*corriente);
		cout << "voltaje es: " << voltaje;
	}
	if (opcion == 3){
		cout << "calculo de corriente: " << endl;
		cout << "Ingrese voltaje: ";
		cin >> voltaje;
		cout << "Ingrese resistencia: ";
		cin >> resistencia;
		corriente = (voltaje/resistencia);
		cout << "corriente es: " << corriente;
	}
	return 0;
}

