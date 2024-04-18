#include <iostream>
#include <cmath>
using namespace std;

 double calucladorahipotenusa(double ad, double op) {
	return sqrt(ad * ad + op * op); 
}


double calcularelladofaltante(double lad1, double lad2){
	return 180 - lad1 - lad2; 


}

int calcularfactorial(int n) {
	if()
}
void calcularelvuelto(int bi , int gast){
	
	int bil = 0;
	
	for(int i = 0; i <10; i++){
		
		if(gast > bil) {
			cout << "no se puede dar mas hasta que se complete lo gastado" << endl; 
			
		}
		
	}
}




int main(int argc, char *argv[]) {
	int op; 
	do{
		cout << " MENU " << endl; 
		cout << "1. calcular la hipotenusa" << endl; 
		cout << "2. calcular el lado faltante" << endl; 
		cout << "3. caluclar el factorial " << endl; 
		cout << "4. calcular el vuelto" << endl;
		cout << "5. Salir " << endl; 
		cout << " elegir una de las opciones" << endl; 
		
		switch(op) {
		case 1:
			double ladop, ladadya;
			cout << "ingrese el lado opuesto"; 
			cin >> ladop;
			cout << "ingrese el lado adyacente"; 
			cin >> ladadya; 
			cout << "la hipotenusa es: " << calucladorahipotenusa(double ad, double op) << endl; 
			
		case 2:
			double lado1, lado2; 
			
			cout << "ingresar el angulo 1"; 
			cin >> lado1; 
			
			cout << "ingrese el angulo 2"; 
			cin >> lado2; 
			
			cout << "el angulo faltante es: " << calcularelladofaltante(double lad1, double lad2)
		};
	} while(op !=5);
	
	
	return 0;
}

