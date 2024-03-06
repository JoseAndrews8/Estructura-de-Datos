#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector() {
	vec[MAX] = 0;
	n = 0;
}
Vector::~Vector() {

}

void Vector::set_n(int _n) {
	n = _n;
}
int Vector::get_n() {
	return n;
}

void Vector::cargar(int _vec[], int _n) {
	for (int i = 0; i < _n; i++){
		cout << "vec[" << i + 1 << "] = ";
		cin >> _vec[i];
	}
}
void Vector::mostrar(int _vec[], int _n) {
	for (int i = 0; i < _n; i++) {
		if (i + 1 == _n)
			cout << "|" << _vec[i] << "|";
		else
			cout << "|" << _vec[i] << "|, ";
	}
	cout << endl;
}
void Vector::ordenar(int _vec[], int _n) {
	int aux;
	for (int i = 0; i < (_n - 1); i++) {
		for (int j = i; j < _n; j++) {
			if (_vec[i] > _vec[j]) {
				aux = _vec[i];
				_vec[i] = _vec[j];
				_vec[j] = aux;
			}
		}
	}
}
void Vector::promedio(int _vec[], int _n) {
	double suma = 0;
	for (int i = 0; i < _n; i++)
		suma += _vec[i];
	cout << "El promedio es: " << suma / _n << endl;

}
