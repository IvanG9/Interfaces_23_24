#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std; //‘string’ does not name a type. Añadir para corregir error

#include "./cuenta.h"




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

void inicializar (Cuenta cuentas [5]) {
	string nombres[5] = {"juan","perico","andres","fulano","vengano"};
	
	for (int i = 0; i< 5; i++) {
		cuentas[i].titular = nombres[i];
		stringstream ss;
		ss << 100+i ;
		string numCuenta = ss.str();
		cuentas[i].numCuenta = numCuenta;
		cuentas[i].saldo = 100*i;
	}

}

void mostrarArrayCuentas (Cuenta cuentas [5]) {
	for (int i = 0; i< 5; i++) {
		mostrar(&cuentas[i]);
	}
}

int seleccionarCuenta(Cuenta cuentas[5]) {

		string cuentaSolicitada;
		
		cout << "introduce el número de ciuenta: ";
		cin >> cuentaSolicitada;
		
		for (int i = 0; i < 5; i++) 
			
			if (cuentas[i].numCuenta == cuentaSolicitada)
				return i;
		
		cout << "No se ha encontrado la cuenta solicitada." <<endl;
		return -1;

}

Cuenta * seleccionarCuenta2(Cuenta cuentas[5]) {

		string cuentaSolicitada;
		
		cout << "introduce el número de ciuenta: ";
		cin >> cuentaSolicitada;
		
		for (int i = 0; i < 5; i++) 
			
			if (cuentas[i].numCuenta == cuentaSolicitada)
				return &cuentas[i];
		
		cout << "No se ha encontrado la cuenta solicitada." <<endl;
		return NULL;
		
		



}

//g++ -o programa banco.c++ cuenta.o
int main (int argc, char *argv[]) {

	Cuenta cuentas [5];
	inicializar(cuentas);
	mostrarArrayCuentas(cuentas);
	
	
	
	
	//if (num <= 0) procesarIngreso(& cuentas[num]);
	
	procesarIngreso(seleccionarCuenta2(cuentas));
	
	/*
	Cuenta c1 ("001", "Barbie", 100);
	Cuenta c2 ("002", "Ken", 200);

	mostrar(&c1);
	mostrar(&c2);

	c1 >> c2;
	mostrar(&c1);
	mostrar(&c2);
	
	c1.estado = Cuenta::LIMITADA;

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


