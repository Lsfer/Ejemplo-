#include <iostream>
#include <string>
using namespace std;

string frase(const string & cnt){
	string respuesta = cnt; 
	int size = respuesta.length(); 
	for(int i = 0; i < size; i++) {
		char caracter = respuesta[i];
		if(caracter == 'i' || caracter == 'I') {
			respuesta[i]= '1'; 
		}
		if(caracter == 'e' || caracter == 'E') {
			respuesta[i]= '3'; 
		}
		if(caracter == 'a' || caracter == 'A') {
			respuesta[i]= '4'; 
		}
		if(caracter == 'o' || caracter == 'O') {
			respuesta[i]= '0'; 
		}
		if(caracter == 'u' || caracter == 'U') {
			respuesta[i]= '*'; 
		}
	}
	return respuesta;
}
int main(int argc, char *argv[]) {
	string fr, frcifrada; 
	
	cout << "ingrese una frase para que se cifre: " ; 
	
	getline(cin,fr); 
	
	frcifrada =  frase(fr); 
	cout << "frase cifrada: " << frcifrada <<endl; 
	return 0;
}

