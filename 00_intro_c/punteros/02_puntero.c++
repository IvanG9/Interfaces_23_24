#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int* maximo (int *pv1, int *pv2) {
	int* max;
	if (*pv1 >= *pv2) *max = *pv1 ;
	else *max = *pv2 ;
	return max ; 
}

int main (int argc, char*argv[]) {

	char c;
	int i, j;
	
	i = 8;
	j = 9;
	
	int * pmax;
	
	pmax = maximo(&i, &j); // i j
	
	*pmax = 100;
	
	cout << "i vale " << i << endl;
	cout << "j vale " << j << endl;
	cout << "j vale " << *pmax << endl;

}
