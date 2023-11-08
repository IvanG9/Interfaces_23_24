#include <iostream>

using namespace std;

class Cuenta {


public:
	string numCuenta;
	string titular;
	float saldo;
	
	enum Estado {BLOQUEADA, LIMITADA, OPERATIVA};
	
	Estado estado;
	
Cuenta ();
	
Cuenta (string nc, string tit, float saldIn = 0);

bool ingresar (float cant);

bool retirar (float cant);

bool transferir (Cuenta* destino);

void operator >> (Cuenta cuentaIngeso);

};

