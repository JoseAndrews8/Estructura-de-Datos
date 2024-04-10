#include <iostream> 
#include "Nodo.h"
#include "Cola.h"
using namespace std;
int main(int argc, char* argv[]) {
    Cola cola;
    int opc = 0;

    do {
        cout << "[1] Hay elementos en la cola?" << endl;
        cout << "[2] Encolar" << endl;
        cout << "[3] Desencolar" << endl;
        cout << "[4] Mostrar" << endl;
        cout << "[0] FINALIZAR" << endl;
        cout << "Opcion: "; 
        cin >> opc;

        system("cls");

        switch (opc) {
        case 1:
            if (cola.estaVacia())
                cout << "La cola se encuentra vacia" << endl;
            else
                cout << "Existe elemento(s) dentro de la cola" << endl;
            break;
        case 2:
            cola.encolar();
            break;
        case 3:
            cola.desencolar();
            break;
        case 4:
            cola.mostrarCola();
            break;
        default:
            cout << "Error..." << endl;
        }
        system("pause");
        system("cls");
    } while (opc != 0);

    return 0;
}