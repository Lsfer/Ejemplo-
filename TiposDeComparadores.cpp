#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	//Utilizar diferentes condiciones
	//Uso de ==
	if (num1 == num2){
		cout << "Los numeros son igualitos" << endl;
	}
	
	//Uso de !=
	if (num1 != num2){
		cout << "Los numeros no son igualitos" << endl;
	}
	
	//Uso de <=
	if (num1 <= num2){
		cout << "El numero 1 es menor o igual al numero 2" << endl;
	}
	
	//Uso de >=
	if (num1 >= num2){
		cout << "El numero 1 es mayor o igual al numero 2" << endl;
	}
	
	//Uso de <
	if (num1 < num2){
		cout << "El numero 1 es menor al numero 2" << endl;
	}
	
	//Uso de >
	if (num1 > num2){
		cout << "El numero 1 es mayor al numero 2" << endl;
	}
	
	bool bool1 = true;
	bool bool2 = true;
	
	1 == bool2){
		cout << "Las dos variables bool son iguales" << endl;
	} else {
		cout << "Las dos variables bool son diferentes" << endl;
	}
	
	return 0;
}

