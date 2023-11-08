#include <stdio.h>
#include <iostream>
#include <stdlib.h>


using namespace std;

void inicializar (int notasPasadas[10]) {
	for (int i = 0; i < 10; i++)
		notasPasadas[i] = random()%101;
}

void mostrar (int notasPasadas[10]) {
	for (int i = 0; i < 10; i++)
		cout << notasPasadas[i] << ", ";
	cout << endl;
}

int buscaMax (int notasPasadas[10]) {
	int max = 0;
	for (int i = 0; i < 10; i++)
		if (notasPasadas[i] > max)
			max = notasPasadas[i];
	return max;
}

int cuantos(int notasPasadas[10], int notaPasada) {
	int cantidad = 0;
	for (int i = 0; i < 10; i++)
			if (notasPasadas[i] == notaPasada) cantidad++;
	return cantidad;
}

bool seguidas (int np[10], int nb) {
	//if (cuantos(np, nb) < 2) return false;
	for (int i = 1; i < 10; i++)
		if (np[i] == np[i-1] && np[i] == nb) return true;
	return false;
}


bool existe(int notasPasadas[10],  int notaPasada) {
	for (int i = 0; i < 10; i++)
		if (notasPasadas[i] == notaPasada) return true;
	return false;
}

bool existe2(int notasPasadas[10],  int notaPasada) {
	return cuantos(notasPasadas, notaPasada) > 0;
}

bool seRepiteAlguna (int notasPasadas[10]) {
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 10; j++) {
			if (notasPasadas[i] == notasPasadas[j]) return true;
		}
	}
	return false;

}

int media4NotasMax (int notasPasadas[10]) {
	int max[10];
	for (int i = 0; i < 10; i++) {
		
	}

}

int main (int argc, char *argv[]) {

	int notas[10];
	
	inicializar(notas);
	notas[0] = 44;
	
	mostrar(notas);
	
	int max = buscaMax(notas);
	
	cout << "La nota máxima es: " << max << endl;
	
	int nota = 6; 
	if (existe(notas,nota))
		cout << "El alumno ha sacado un " << nota << endl;
	else cout << "El alumno no ha sacado ningún " << nota << endl;
	
	
	cout << cuantos(notas, nota) << " notas del alumno tienen un valor de " << nota << endl;
	
	
	if (seguidas(notas, nota)) cout << "El alumno ha sacado 2 notas de valor " << nota << " seguidas" << endl;
	else cout << "El alumno no ha sacado 2 notas seguidas de valor " << nota << endl;
	
	if (seRepiteAlguna(notas)) cout << "Se repite" << endl;
	else cout << "No se repite" << endl;
	
	
}
