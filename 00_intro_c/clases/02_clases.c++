#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cuenta {


public:
	string numCuenta;
	string titular;
	float saldo;

bool ingresar (float cant) {
	if (cant > 0) {
		saldo += cant;
		return true;
	}
	return false;
}

bool retirar (float cant) {
	if (saldo >= cant) {
		saldo -= cant;
		return true;
	}
	else return false;
}


};

void mostrar (Cuenta *c) {
	cout << "Titular: " << c->titular << " Saldo: " << c->saldo << endl;

}

void procesarIngreso (Cuenta * c) {
	mostrar(c);
	
	float cant;	
	
	cout << "Introduce la cantidad a ingresar: ";
	cin >> cant;
	
	if ((*c).ingresar(cant))
		cout << "Has ingresado " << cant << "€ en tu cuenta. Saldo total: " << (*c).saldo << "€." << endl;
	else cout << "No puedes ingresar un saldo negativo" << endl;
}

void procesarRetiro (Cuenta * c) {
	mostrar(c);

	float cant;
	
	cout << "Introduce la cantidad a retirar: ";
	cin >> cant;
	
	if (c->retirar(cant))
		cout << "Has retirado " << cant << "€ de tu cuenta. Saldo total: " << c->saldo << "€." << endl;
	else cout << "No puedes retirar mas saldo del que tienes" << "Saldo total: " << c->saldo << "€." << endl;

}

int main (int argc, char *argv[]) {
	
	Cuenta c1,c2;
	
	c1.titular = "Barbie";
	c2.titular = "Ken";
	
	c1.saldo = 100;
	c2.saldo = 200;
	
	
	procesarIngreso(&c1);
	procesarIngreso(&c2);
	procesarRetiro(&c1);
	procesarRetiro(&c2);
	
	mostrar(&c1);
	mostrar(&c2);
}
