#include <iostream>
using namespace std;
void multiplosdenumero(int num) {
	cout << "el resultado de " << num << " es : " ; 
	for (int x = 1; x <=10; x++) {
		cout << num * x << " "; 
		
	}
	cout << endl; 
}
void calcularelfactorial(int num) {
	int fac = 1; 
	for (int x = 1; x <=num ; x++) {
		fac *= x ; 
	}
	cout << "el factorial de " << num << " es " << fac << endl; 
	
}
void calcularelfibonacci(int num) {
	int N,i=0, x=1, j= 0; 
	
	
	cout << "ingrese el numero ptra vez para ver su serie : " << endl;
	cin >> N; 
	
	cout << "1 "; 
	for ( int a= 1; a < N; a++ ) {
		
		j= i + x; 
		cout<<j<<" "; 
		i = x; 
		x = j;
	}
}
int main(int argc, char *argv[]) {
	int num, acc; 
	cout << "ingrese un numero: "; 
	cin >> num; 
	
	cout << "seleccione que accion quiere: " << endl; 
	cout << "Acc 1: buscar todos los múltiplos del número" <<endl; 
	cout << "Acc 2: calcular el factorial del número" << endl; 
	cout << "Acc 3: calcular la serie fibonacci del número" << endl; 
	cin >> acc; 
	switch(acc) {
	case 1:
		multiplosdenumero(num); 
		break; 
		
	case 2:
		calcularelfactorial(num); 
		break; 
		
	case 3:
		calcularelfibonacci(num);
		break; 
	}
	return 0;
}
