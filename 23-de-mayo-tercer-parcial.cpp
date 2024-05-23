#include <iostream>
#include <string>

using namespace std;

char tab[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void tabla() {
	cout << "-------------\n";
	for (int i = 0; i < 9; i++) {------
		cout << "| " << tab[i] << " ";
		if ((i + 1) % 3 == 0) {
			cout << "|\n-------------\n";
		}
	}
}

bool gan(char jug) {
	int fig[8][3] = {
		{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, 
		{0, 3, 6}, {1, 4, 7}, {2, 5, 8}, 
		{0, 4, 8}, {2, 4, 6}  
	};
	for (int i = 0; i < 8; i++) {
		if (tab[fig[i][0]] == jug && tab[fig[i][1]] == jug && tab[fig[i][2]] == jug) {
			return true;
		}
	}
	return false;
}

bool comp() {
	for (int i = 0; i < 9; i++) {
		if (tab[i] != 'X' && tab[i] != 'O') {
			return false;
		}
	}
	return true;
}

void mov(char jug, const string & nom) {
	int mobimiento;
	bool valida = false;
	while (!valida) {
		cout << "Jugador " << nom << " (" << jug << "),  ingresa donde quieres conenzar: ";
		cin >> mobimiento;
		if (mobimiento < 1 || mobimiento > 9 || tab[mobimiento - 1] == 'X' || tab[mobimiento - 1] == 'O') {
			cout << "Movimiento inválido bro. Intentalo de nuevo.\n";
		} else {
			tab[mobimiento - 1] = jug;
			valida = true;
		}
	}
}

int main() {
	string jugador1, jugador2;
	cout << "Ingrese el nombre del jugador 1 (X): ";
	cin >> jugador1;
	cout << "Ingrese el nombre del jugador 2 (O): ";
	cin >> jugador2;
	
	char actua = 'X';
	string elnomb = jugador1;
	bool fin = false;
	
	while (!fin) {
		tabla();
		mov(actua, elnomb);
		if (gan(actua)) {
			tabla();
			cout << "Jugador " <<  elnomb << " (" << actua << ") gano uwu\n";
			fin = true;
		} else if (comp()) {
			tabla();
			cout << "emapte :3\n";
			fin = true;
		} else {
			if (actua == 'X') {
				actua = 'O';
				elnomb = jugador2;
			} else {
				actua = 'X';
				elnomb = jugador1;
			}
		}
	}
	
	return 0;
}
