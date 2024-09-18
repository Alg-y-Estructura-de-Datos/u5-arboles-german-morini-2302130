#include "Arbol/ArbolBinario.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    if (argc == 1) {
        cout << "Uso: " << argv[0] << " PRODUCTOS..." << endl;
        return 1;
    }

    ArbolBinario<int>* ar = new ArbolBinario<int>;

    for (int i = 1; i < argc; i++) {
        ar->put(atoi(argv[i]));
    }
    
    try {
        ar->remove(2002);
        ar->remove(6003);
        cout << "Se pudieron eliminar \\(^.^)/" << endl;
    } catch (int) {
        cout << "No se pudieron eliminar <:(" << endl;
        return 420;
    }

    cout << "Ingresando producto '2500'..." << endl;
    ar->put(2500);

    ar->print();

    try {
        ar->search(4001);
        cout << "El dato se encuentra acá \\(^.^)/" << endl;
    } catch (int) {
        cout << "No se encontro el dato <:(" << endl;
    }
}