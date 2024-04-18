#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
using namespace std;

void gotoxy(int x, int y) {
	
	COORD coord; 
	coord.X = x; 
	coord.Y = y; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
}
void Menu1() {
	int coordx, coordy; 
	int num, op;
	string palabra;
	
	cout << "Menu 1" << endl; 
	cout << "1. Mensaje" << endl; 
	cout << "2. Numero" << endl; 
	cout << "3. palabra" << endl; 
	cin >> op; 
	
	switch(op){
	case 1:
		cout << "ingrese la X" << endl; 
		cin >> coordx; 
		cout << "ingrese La Y" << endl; 
		cin >> coordy; 
		
		cout << "holamundo estoy en gotoxy" << endl; 
		break; 
		
	case 2: 
		cout << "ingresa un numero: " << endl; 
		cin >> num; 
		
		gotoxy (42,12); 
		cout << num << endl; 
		break; 
		
	case 3: 
		cout << "ingrese una palabra: " << endl; 
		cin >> palabra; 
		
		for (int c = 1; c <= 10; c++) {
			coordx = rand() % 100;  
			coordy = rand() % 30;   
			gotoxy(coordx, coordy);
			cout << palabra << endl;
			
	} 
	break; 
		
	default:
		cout << "opcion invalida" << endl; 
		
		
}
void Menu2() {
		int ops, salud
		cout << "ingrese un caracter" << endl; 
		cout << "saludar" << endl; 
		cin >> ops; 
		
		switch(ops) {
		case 1: 
			gotoxy(30,30);
			break; 
		case 2: 
			cout << "saluda a un compa: " << endl; 
			cin >> salud << endl; 
			cout << "hola amigo" << endl; 
			break ;
			
		default: 
			cout << "opcion invalida" << endl; 
		}
		
}
	
int main(int argc, char *argv[]) {
	int opcion;
	
	do {
		cout << "Elige una opción:" << endl;
		cout << "1. Menu 1" << endl;
		cout << "2. Menu 2" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			
			Menu1();
			break;
		case 2:
		
			Menu2();
			break;
		case 0:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opción inválida" << endl;
			break;
		}
	} while (opcion != 0);
	
	return 0; 
}
