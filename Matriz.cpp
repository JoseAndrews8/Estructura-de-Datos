#include <iostream>
#include "Matriz.h"

using namespace std;

Matriz::Matriz() {

}
Matriz::~Matriz() {

}

int Matriz::get_fil() {
	return fil;
}
void Matriz::set_fil(int fila) {
	fil = fila;
}
int Matriz::get_col() {
	return col;
}
void Matriz::set_col(int columna) {
	col = columna;
}
void Matriz::mostrarmat(int MAT[MAX][MAX], int MAT2[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << "[" << MAT[i][j] << "]" << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << "[" << MAT2[i][j] << "]" << "\t";
		}
		cout << endl;
	}

}
void Matriz::cargarmat(int MAT[MAX][MAX],int MAT2[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "MAT1[" << i << "][" << j << "]= ";
			cin >> MAT[i][j];
		}
	cout << "Matriz 1 cargada..." << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "MAT2[" << i << "][" << j << "]= ";
			cin >> MAT2[i][j];
		}
	cout << "Matriz 2 cargada..." << endl;
}
float Matriz::promedio(int MAT[MAX][MAX], int m, int n) {
	float prom, s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s = s + MAT[i][j];
	prom = s / (m * n);
	return prom;
}
int Matriz::mayor(int MAT[MAX][MAX], int m, int n) {
	int may = MAT[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (MAT[i][j] > may)
				may = MAT[i][j];
	return may;
}
void Matriz::sumarmat(int MAT[MAX][MAX], int MAT2[MAX][MAX], int m, int n) {
	int MAT3[MAX][MAX];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			MAT3[i][j] = MAT[i][j] + MAT2[i][j];
		}
	cout << "Suma de Matrices: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << "[" << MAT3[i][j] << "]" << "\t";
		}
		cout << endl;
	}
}
