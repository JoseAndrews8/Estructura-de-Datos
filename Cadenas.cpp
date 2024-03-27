#include "Cadenas.h"
#include <iostream>
#include <string>

using namespace std;

Cadenas::Cadenas() {

}
Cadenas::~Cadenas() {

}

string Cadenas::get_cadenas() {
	return cadenas;
}
void Cadenas::set_cadena(string car) {
	cadenas = car;
	longitud = cadenas.length();
}
int Cadenas::tamanio() {
	return longitud;
}
void Cadenas::comparar() {
	string var2;
	cout << endl << "Ingresar el segundo string: ";
	getline(cin, var2);

	if (cadenas.compare(var2) == 0)
		cout << endl << "Los datos coinciden" << endl;
	else
		cout << cadenas << " es diferente que " << var2 << " : " << endl;
}
void Cadenas::contar_vocales() {
	int cont = 0;
	for (int i = 0; i < longitud; i++)
		if (cadenas[i] == 'a' || cadenas[i] == 'e' || cadenas[i] == 'i' || cadenas[i] == 'o' || cadenas[i] == 'u')
			cont++;
	cout << "Numero de vocales: " << cont << endl;
}
void Cadenas::substring() {
	int pos;
	cout << endl << "Ingrese desde donde desea extraer el sbstring: ";
	cin >> pos;
	cout << cadenas.substr(pos, longitud - pos);
	cin.ignore();
}
void Cadenas::encontrar() {
	char car;
	cout << "Que caracter desea encontrar: ";
	cin >> car;
	for (int i = 0; i < longitud; i++)
		if (cadenas.at(i) == car)
			cout << endl << "Existe un espacio en: " << i;
}

void Cadenas::invertir() {
	string var2 = cadenas;
	longitud = cadenas.length();
	char aux;
	for (int i = 0; i < longitud / 2; i++)
	{
		aux = cadenas[i];
		cadenas[i] = cadenas[longitud - 1 - i];
		cadenas[longitud - 1 - i] = aux;
	}
	cout << "La cadena invertida es: " << cadenas << endl;
}
void Cadenas::quitar_vocales() {
	string var2 = "";
	for (int i = 0; i < longitud; i++) {
		if (cadenas[i] != 'a' && cadenas[i] != 'e' && cadenas[i] != 'i' &&
			cadenas[i] != 'o' && cadenas[i] != 'u') {
			var2 += cadenas[i];
		}
	}
	cout << "Sin vocales es: " << var2;
}
bool Cadenas::es_palindromo() {
	string var2 = cadenas;
	longitud = cadenas.length();
	char aux;
	for (int i = 0; i < longitud / 2; i++)
	{
		aux = cadenas[i];
		cadenas[i] = cadenas[longitud - 1 - i];
		cadenas[longitud - 1 - i] = aux;
	}

	if (var2.compare(cadenas) == 0) {
		return true;
	}
	else return false;
}
