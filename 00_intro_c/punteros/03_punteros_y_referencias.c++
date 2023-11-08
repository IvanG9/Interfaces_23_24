#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void hazNegativo(int* numero) {
	*numero = - abs (*numero);
}

void hazNegativo2(int & numero) {
	numero = - abs (numero);
}

int* maximo (int *pv1, int *pv2) {
	int* max;
	if (*pv1 >= *pv2) *max = *pv1 ;
	else *max = *pv2 ;
	return max ; 
}

int & maximo2 (int & pv1, int & pv2) {
	if (pv1 >= pv2) return pv1 ;
	else return pv2  ;
}

int main (int argc, char*argv[]) {

	int i;
	
	int &j = i;
	int o = 50;

	i = 40;
	//hazNegativo(&i);
	//hazNegativo2(i);
	int &max = maximo2(i, o);
	cout << "max vale " << max << endl;
	
	cout << "i vale " << i << endl;
	cout << "j vale " << j << endl;
	cout << "o vale " << o << endl;
	
	max = 90;
	
	cout << "max vale " << max << endl;
	
	cout << "i vale " << i << endl;
	cout << "j vale " << j << endl;
	cout << "o vale " << o << endl;
}

