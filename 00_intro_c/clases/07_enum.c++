#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cuenta {


public:
	string numCuenta;
	string titular;
	float saldo;
	
	enum Estado {BLOQUEADA, LIMITADA, OPERATIVA};
	
	Estado estado;
	
Cuenta () {
	estado = OPERATIVA;
}
	
Cuenta (string nc, string tit, float saldIn = 0) :
	numCuenta (nc),
	titular (tit),
	saldo (saldIn) {
		estado = OPERATIVA;
	}

bool ingresar (float cant) {
	if (cant > 0 && estado != BLOQUEADA) {
		saldo += cant;
		return true;
	}
	return false;
}

bool retirar (float cant) {
	if (saldo >= cant && estado != BLOQUEADA && estado != LIMITADA) {
		saldo -= cant;
		return true;
	}
	else return false;
}

bool transferir (Cuenta* destino) {
	if (destino->ingresar(saldo)) {
		saldo = 0;
		return true;
	}
	return false;

}

void operator >> (Cuenta cuentaIngeso) {
	(*this).transferir(&cuentaIngeso);
}

};

void mostrar (Cuenta *c) {
	cout << "Titular: " << c->titular << " Saldo: " << c->saldo << endl;

}

void procesarIngreso (Cuenta * c) {

	if ( c->estado == Cuenta::BLOQUEADA){
		cout << "Cuenta BLOQUEADA!!" << endl;
		return;	
	}
	mostrar(c);
	
	float cant;	
	
	cout << "Introduce la cantidad a ingresar: ";
	cin >> cant;
	
	if ( c->estado == Cuenta::BLOQUEADA) cout << "Cuenta BLOQUEADA!!" << endl;

	else if ((*c).ingresar(cant))
		cout << "Has ingresado " << cant << "€ en tu cuenta. Saldo total: " << (*c).saldo << "€." << endl;
	
	else cout << "No puedes ingresar un saldo negativo" << endl;
}

void procesarRetiro (Cuenta * c) {
	mostrar(c);
	if ( c->estado == Cuenta::BLOQUEADA) {
		cout << "Cuenta BLOQUEADA!!" << endl;
		return;
	}
	else if ( c->estado == Cuenta::LIMITADA) {
	 cout << "Cuenta LIMITADA!!" << endl;
	 return;
	 }

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

	c1 >> c2;
	mostrar(&c1);
	mostrar(&c2);
	
	c2.estado = Cuenta::LIMITADA;

	c2 >> c1;
	mostrar(&c1);
	mostrar(&c2);
	
	c1.estado = Cuenta::BLOQUEADA;

	
	c1 >> c2;
	mostrar(&c1);
	mostrar(&c2);
	/*
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
	*/
	
}
