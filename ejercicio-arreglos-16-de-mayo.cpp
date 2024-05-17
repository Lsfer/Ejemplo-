#include <iostream>
#include <cmath>

using namespace std;


void llenarAtrasAdelante(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << "Ingresa el valor para la posición " << size << ": ";
		cin >> arr[size];
	}
}


void clonarArreglo(int arr[], int clone[], int size) {
	for (int i = 0; i < size; ++i) {
		clone[i] = arr[i];
	}
	cout << "Arreglo clonado exitosamente.\n";
}


void convertirPositivos(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] < 0) {
			arr[i] = abs(arr[i]);
		}
	}
	cout << "Todos los números negativos se han vuelto positivos.\n";
}

int main() {
	int opcion;
	do {
		
		cout << "Menú de Opciones:\n";
		cout << "1. Llenar un arreglo de atrás para adelante\n";
		cout << "2. Clonar un arreglo\n";
		cout << "3. Volver positivos todos los números negativos en un arreglo\n";
		cout << "4. Salir\n";
		cout << "Seleccione una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1: {
			int size;
			cout << "Ingrese el tamaño del arreglo: ";
			cin >> size;
			int* arr = new int[size];
			llenarAtrasAdelante(arr, size);
			cout << "Arreglo llenado de atrás hacia adelante:\n";
			for (int i = 0; i < size; ++i) {
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		}
		case 2: {
			int size;
			cout << "Ingrese el tamaño del arreglo: ";
			cin >> size;
			int* arr = new int[size];
			int* clone = new int[size];
			cout << "Ingrese los elementos del arreglo:\n";
			for (int i = 0; i < size; ++i) {
				cin >> arr[i];
			}
			clonarArreglo(arr, clone, size);
			cout << "Arreglo original:\n";
			for (int i = 0; i < size; ++i) {
				cout << arr[i] << " ";
			}
			cout << "\nArreglo clonado:\n";
			for (int i = 0; i < size; ++i) {
				cout << clone[i] << " ";
			}
			cout << endl;
			
			break;
		}
		case 3: {
			const int size = 10;
			int arr[size];
			cout << "Ingrese 10 números (pueden ser positivos o negativos):\n";
			for (int i = 0; i < size; ++i) {
				cin >> arr[i];
			}
			convertirPositivos(arr, size);
			cout << "Arreglo con todos los números convertidos a positivos:\n";
			for (int i = 0; i < size; ++i) {
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		}
		
		case 4:
			cout << "Saliendo del menu\n";
			break;
		default:
			cout << "Opción no válida. Intente de nuevo.\n";
		}
	} while (opcion != 5);
	
	return 0;
}
