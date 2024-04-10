#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

class Cola {
private:
    Nodo* inicio;
    Nodo* fin;

public:
    Cola() : inicio(nullptr), fin(nullptr) {}

    bool estaVacia();
    void encolar();
    void desencolar();
    void mostrarCola();
};
