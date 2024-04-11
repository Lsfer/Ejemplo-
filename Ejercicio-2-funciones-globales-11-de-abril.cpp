#include <iostream>
#include <string>
using namespace std;

void pedirnumero() {
	int numero;
	cout << "ingrese un numero: " << endl;
	cin >> numero; 
	cout << "tu numero ingresado es: " << numero << endl; 
}

void pedirunapalabra() {
	string palabra; 
	cout << "ingrese una palabra: "  << endl; 
	cin >> palabra; 
	cout << "Tu palabra es: " << palabra << endl; 
}
void pedirunaletra() {
	char letra; 
	cout << "ingrese una letra: " << endl;
	cin >> letra; 
	cout << "tu letra es: " << letra << endl; 
}
int main(int argc, char *argv[]) {
	char continuarmenu; 
	int opcion; 
	
	do {
		cout << "1. Numero: " << endl; 
		cout << "2. Palabra: " << endl; 
		cout << "3. Letra: " << endl; 
		cout << "Por favor ingrese de las siguientes opciones (1 al 3): " << endl; 
		cin >> opcion; 
		
		switch(opcion) {
		case 1:
			pedirnumero(); 
			break; 
		case 2: 
			pedirunapalabra(); 
			break; 
		case 3: 
			pedirunaletra(); 
			break;
		default: 
			cout << "opcion no valida" << endl; 
		}
		cout << "¿Desea continuar con el menu? s/n: "; 
		cin >> continuarmenu; 
		
	} while(continuarmenu == 's');
	
	cout << "fin" << endl; 
	return 0;
}

