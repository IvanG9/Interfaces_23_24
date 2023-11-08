#include <iostream>
#include "./cuenta.h"


	
Cuenta::Cuenta () {
	estado = OPERATIVA;
}
	
Cuenta::Cuenta (string nc, string tit, float saldIn) :
	numCuenta (nc),
	titular (tit),
	saldo (saldIn) {
		estado = OPERATIVA;
	}

bool Cuenta::ingresar (float cant) {
	if (cant > 0 && estado != BLOQUEADA) {
		cout << "Cantidad ingresada: " << cant <<endl;
		saldo += cant;
		return true;
	}
	return false;
}

bool Cuenta::retirar (float cant) {
	if (saldo >= cant && estado != BLOQUEADA && estado != LIMITADA) {
		saldo -= cant;
		return true;
	}
	else return false;
}

bool Cuenta::transferir (Cuenta* destino) {
	if (destino->estado != BLOQUEADA && estado == OPERATIVA) {
		
		if (destino->ingresar(saldo) ) {
			cout << "ingresando" << endl;
			saldo = 0; //
			return true;
		}
	}
	return false;

}

void Cuenta::operator >> (Cuenta cuentaDestino) {
	transferir(&cuentaDestino);
}

