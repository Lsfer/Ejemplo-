#include <iostream>
using namespace std;
double suma ( double num1, double num2, double num3) {
	return num1 + num1 + num3; 
}

int main(int argc, char *argv[]) {
	double num1, num2, num3; 
	cout << "ingrese el primer numero:" ;
	cin >> num1; 
	cout << "ingrese el segundo numero: ";
	cin >> num2; 
	cout << "ingrese el tercer numero: "; 
	cin >> num3; 
	double resultado = suma (num1,num2,num3); 
	cout << "los numeros unidos son: " << resultado; 
	return 0;
}
