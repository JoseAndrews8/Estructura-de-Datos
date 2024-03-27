#pragma once
#include <string>

using namespace std;

class Cadenas
{
private:
	int longitud;
	string cadenas;
public:
	Cadenas();
	~Cadenas();

	string get_cadenas();
	void set_cadena(string car);
	int tamanio();
	void comparar();
	void contar_vocales();
	void substring();
	void encontrar();
	void invertir();
	void quitar_vocales();
	bool es_palindromo();
};

