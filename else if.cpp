#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//else if con mis primos
	//Luis, Marcela, Montse, Rodrigo
	//Camila, Estefany
	
	int culpa = 0;
	cout << "Ingrese el posible culpable 1-6:";
	cin >> culpa;
	
	if(culpa == 1) {
		cout << "El culpable fue Luis";
	}
	else if (culpa == 2) {
		cout << "La culpable es Marce";
	}
	else if (culpa == 3) {
		cout << "La culpable es Montse";
	}
	else if (culpa == 4){
		cout << "El culpable es Rodrigo";
	} 
	else if (culpa == 5) {
		cout << "La culpable es Camila";
	}
	else if (culpa == 6) {
		cout << "La culpable es Estefany";
	}
	else {
		cout << "No sabemos quien es el culpable";
	}
	return 0;
}

