#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char opcion;
	double num1, num2, resultado;
	
	do {
		cout << "�Qu� operaci�n desea realizar?" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicaci�n" << endl;
		cout << "4. Divisi�n" << endl;
		cout << "5. Salir" << endl;
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			cout << "Ingrese el primer n�mero: ";
			cin >> num1;
			cout << "Ingrese el segundo n�mero: ";
			cin >> num2;
			resultado = num1 + num2;
			cout << "La suma de los n�meros es: " << resultado << endl;
			break;
		case '2':
			cout << "Ingrese el primer n�mero: ";
			cin >> num1;
			cout << "Ingrese el segundo n�mero: ";
			cin >> num2;
			resultado = num1 - num2;
			cout << "La resta de los n�meros es: " << resultado << endl;
			break;
		case '3':
			cout << "Ingrese el primer n�mero: ";
			cin >> num1;
			cout << "Ingrese el segundo n�mero: ";
			cin >> num2;
			resultado = num1 * num2;
			cout << "La multiplicaci�n de los n�meros es: " << resultado << endl;
			break;
		case '4':
			cout << "Ingrese el dividendo: ";
			cin >> num1;
			cout << "Ingrese el divisor: ";
			cin >> num2;
			if (num2 != 0) {
				resultado = num1 / num2;
				cout << "El resultado de la divisi�n es: " << resultado << endl;
			} else {
				cout << "Error: No se puede dividir por cero." << endl;
			}
			break;
		case '5':
			cout << "adios" << endl;
			break;
		default:
			cout << "Opci�n no v�lida." << endl;
		}
		
	} while (opcion != '5');
	
	return 0;
}
