#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cuenta {


public:
	string numCuenta;
	string titular;
	float saldo;

void ingresar (float cant) {
	if (cant > 0) {
		saldo += cant;
	}
		
}

bool retirar (float cant) {
	if (saldo >= cant) {
		saldo -= cant;
		return true;
	}
	else return false;
}


};

int main (int argc, char *argv[]) {
	
	Cuenta c;
	c.saldo = 0;
	c.titular = "Juan";
	c.ingresar(1000);
	c.retirar(490);
	c.retirar(1490);
		
	cout << "El saldo de la cuenta de " << c.titular << " es de " << c.saldo << "€" << endl;
	
}
