#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void hazNegativo (int*p) {
	//*p = *p * -1;
	*p = - abs(*p);
}

int main (int argc, char*argv[]) {

	char c;
	int i, j;
	
	int *p; //puntero
	
	p = &i; //&i dirección de memoria donde se guarda i
	*p = 3; 
	
	hazNegativo(p);
	
	cout << "i vale " << i << endl;

}
