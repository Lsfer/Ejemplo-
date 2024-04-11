#include <iostream>
#include <string> 
using namespace std;
string palabra (string palabra1 ,string palabra2) {
	return palabra1 + palabra2; 
	
}

int main(int argc, char *argv[]) {
	string palabra1, palabra2, resultado; 
	cout << "ingrese una palabra"; 
	cin >> palabra1; 
	cout << "ingrese una palabra"; 
	cin >> palabra2; 
	
	resultado = palabra (palabra1 , palabra2) ; 
	
	cout << "las palabras unidas son : " << resultado; 
	return 0;
}
