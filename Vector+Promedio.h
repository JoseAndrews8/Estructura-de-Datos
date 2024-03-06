#pragma once
#define MAX 100
class Vector
{
private: 
	int vec[MAX], n;
public:
	Vector();
	~Vector();

	void set_n(int _n);
	int get_n();

	void cargar(int _vec[], int _n);
	void mostrar(int _vec[], int _n);
	void ordenar(int _vec[], int _n);
	void promedio(int _vec[], int _n);
};

