#include "Cola.h"

bool Cola::estaVacia() {
    return inicio == nullptr;
}

void Cola::encolar() {
    Nodo* elemento = new Nodo;

    cout << "Codigo: ";
    cin >> elemento->dato.Codigo;

    cout << "Nombres: ";
    cin >> elemento->dato.Nombre;

    cout << "Carrera: ";
    cin >> elemento->dato.Carrera;

    if (estaVacia()) {
        inicio = fin = elemento;
    }
    else {
        fin->puntero = elemento;
        fin = elemento;
    }
}

void Cola::desencolar() {
    int confirm;
    cout << "Estas seguro que quieres desencolar? (1:Si/2:No): ";
    cin >> confirm;
    if (confirm == 1) {
        if (!estaVacia()) {
            cout << "Codigo: " << inicio->dato.Codigo << endl;
            cout << "Nombres: " << inicio->dato.Nombre << endl;
            cout << "Carrera: " << inicio->dato.Carrera << endl;

            Nodo* temp = inicio;
            inicio = inicio->puntero;
            delete temp;
        }
        else {
            cout << "La cola se encuentra vacia" << endl;
        }
    }
    else return;
}

void Cola::mostrarCola() {
    Nodo* temp = inicio;

    if (estaVacia()) {
        cout << "La cola se encuentra vacia" << endl;
        return;
    }

    cout << "Elementos en la cola:" << endl;
    while (temp != nullptr) {
        cout << "Codigo: " << temp->dato.Codigo << endl;
        cout << "Nombres: " << temp->dato.Nombre << endl;
        cout << "Carrera: " << temp->dato.Carrera << endl;
        cout << endl;
        temp = temp->puntero;
    }
}


