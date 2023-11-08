#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Complejo {
	
public:

	float real;
	float imag;

	void mostrar () {
	
		cout << "( " << real << " + " << imag << "i )" << endl;
	}
	
	float modulo() {
		return sqrtf( powf (real, 2) + powf (imag, 2) );
	
	}
	
	Complejo operator+ (Complejo c2) {	
		Complejo res;
		res.real = real + c2.real;
		res. imag = imag + c2.imag;
		
		return res;

	}

	Complejo operator+ (int c2) {	

		Complejo conv;
		conv.real = c2;
		conv.imag = 0;
		return (*this) + conv;

	}


	bool operator > (Complejo c2) {	
		return this->modulo() > c2.modulo();
	}

	bool operator < (Complejo c2) {	
		return this->modulo() < c2.modulo() ;
	}

	bool operator == (Complejo c2) {	
		return ( this->real == c2.real && this->imag == c2.imag);
	}

};

Complejo operator+ (int c1, Complejo c2) {	

	return c2 + c1;

}

/*

Complejo operator+ (Complejo c1, Complejo c2) {	
	Complejo res;
	res.real = c1.real + c2.real;
	res. imag = c1.imag + c2.imag;
	
	return res;

}

Complejo operator+ (Complejo c1, int c2) {	

	Complejo conv;
	conv.real = c2;
	conv.imag = 0;
	return c1 + conv;

}






bool operator> (Complejo c1, Complejo c2) {	
	return c1.modulo() > c2.modulo();
}

bool operator< (Complejo c1, Complejo c2) {	
	return c1.modulo() < c2.modulo() ;
}

bool operator== (Complejo c1, Complejo c2) {	
	return ( c1.real == c2.real && c1.imag == c2.imag);
}

*/
Complejo sumaComplejos (Complejo c1, Complejo c2) {	

	return c1 + c2;

}

int main (int argc, char*argv[]) {

	Complejo i, j;
	
	i.real = 1;
	i.imag = 1;
	
	j.real = 6;
	j.imag = 6;
	
	j.mostrar();
	i.mostrar();
	
	Complejo suma = sumaComplejos ( i, j);
	suma.mostrar();
	
	(suma + j).mostrar();
	
	( i + 3 ).mostrar();
	( 3 + i ).mostrar();
	cout << i.modulo() << endl;
	

	if (i > j) cout << "i es mayor que j" << endl;
	else if ( i < j) cout << "i es menor que j" << endl;
	else cout << "i = j" << endl;

}
