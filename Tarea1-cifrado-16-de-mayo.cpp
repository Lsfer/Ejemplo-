#include <iostream>
using namespace std;
int cifradodecontra(int cn, int num ) {
	int sm = cn + num; 
	int mult = sm * num; 
	return mult;
}


int main(int argc, char *argv[]) {
	int cn, num, contc; 
	
	cout << "ingrese una contraseņa: " ; 
	cin >> cn; 
	
	cout << "imgrese un numero: "; 
	cin >> num; 
	
	contc = cifradodecontra(cn, num); 
	cout << "su contrasseņa finalizada es : " << contc << endl; 
	return 0;
}

