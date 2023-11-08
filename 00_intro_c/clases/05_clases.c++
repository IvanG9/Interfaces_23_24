#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cuenta {


public:
	string numCuenta;
	string titular;
	float saldo;
	
Cuenta () {}
	
Cuenta (string nc, string tit, float saldIn = 0) :
	numCuenta (nc),
	titular (tit),
	saldo (saldIn) 
	{}

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

bool transferir (Cuenta* destino) {
	if ( destino->ingresar(saldo) ) {
		saldo = 0;
		return true;
	}
	return false;

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

void transferirTodo (Cuenta* c1 ,Cuenta* c2) {
	
	if (c2->ingresar(c1->saldo) ) {
		c1->retirar(c1->saldo);
	}
} 

int main (int argc, char *argv[]) {
	
	Cuenta c1 ("001", "Barbie", 100);
	Cuenta c2 ("002", "Ken", 200);
	Cuenta c3;
	c3.titular = "Mario";
	
	cout << c3.titular << endl;
	
	procesarIngreso(&c1);
	procesarIngreso(&c2);
	procesarRetiro(&c1);
	procesarRetiro(&c2);
	
	mostrar(&c1);
	mostrar(&c2);
	
	
	//transferirTodo(&c1, &c2);
	c1.transferir(&c2);
	mostrar(&c1);
	mostrar(&c2);
	
}
