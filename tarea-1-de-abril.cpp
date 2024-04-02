#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N,i=0, x=1, j= 0; 
	
	
	cout << "ingrese un numero para ver su serie: " << endl;
	cin >> N; 
	
	cout << "1 "; 
	for ( int a= 1; a < N; a++ ) {
		
		j= i + x; 
		cout<<j<<" "; 
		i = x; 
		x = j;
	}

	
	return 0;
}

