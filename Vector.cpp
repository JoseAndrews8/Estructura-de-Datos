#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector(void) {
	vec[10] = 0;
	n = 0;
}
Vector::~Vector(void) {

}
void Vector::set_n(int _n) {
	n = _n;
}
int Vector::get_n() {
	return n;
}

void Vector::cargarVector(int vec[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i + 1 << "] = ";
		cin >> vec[i];
	}
}
void Vector::mostrarVector(int vec[], int n) {
	for (int i = 0; i < n; i++) {
		if (i + 1 == n)
			cout << "|" << vec[i] << "|";
		else
			cout << "|" << vec[i] << "|, ";
	}
	cout << endl;
}
void Vector::ordenarVector(int vec[], int n) {
	int aux;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = i; j < n; j++) {
			if (vec[i] > vec[j]) {
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
