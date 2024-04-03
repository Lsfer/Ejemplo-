#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0;
	cout << "ibgrese un numero:  "; 
	cin >> num1; 
	switch (num1) {
	case 1:
		cout << "area comun"; 
		break;
	case 3:
		cout << "area comun";  
		break; 
	case 5:
		cout << "area espesifica"; 
		break; 
	case 6:
		cout << "area espesifica"; 
		break;
	default:
		cout << "No nos encontramos encontramos en este semestre"; 
		break;
	}
	cout << endl << "fin del switch"; 
	return 0;
}

