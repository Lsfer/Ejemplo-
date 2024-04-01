#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Crear un programa que ingrese dos números Y LOS SUME
	int numero1;
	int numero2;
	cout << "Ingrese el primer numero: ";
	cin >> numero1;
	cout << "Ingrese el segundo numero: ";
	cin >> numero2;
	
	//hacer un nuevo numero1
	int resultado;
	resultado = numero1 + numero2;
	cout << "El resultado es: " << resultado;
	return 0;
}

