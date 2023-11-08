#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {

	int numero = 0;
	int secreto = 8;
	int intentos = 1;
	
	
	do {
		cout << "Dame un numero: ";
		cin >> numero;
		
		cout << "el numero es " << numero << endl;
		
		
		if (numero < secreto) {
			cout << "El número secreto es mayor." << endl;
			intentos++;
		}
		else if (numero > secreto) {
			cout << "El número secreto es menor." << endl;
			intentos++;
		}
	
	} while (numero != secreto);
	
	cout << "has acertado el número" << endl;
	cout << "Has hacertado el numero en " << intentos << " intentos." << endl;
	
}
