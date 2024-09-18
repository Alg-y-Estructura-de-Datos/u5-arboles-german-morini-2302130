#include <iostream>
#include "Arbol/ArbolBinario.h"

using namespace std;

int main(int argc, char** argv) {
    ArbolBinario<int>* ar = new ArbolBinario<int>;
    int search;
    
    for (int i = 1; i < argc; i++) {
        ar->put(atoi(argv[i]));
    }

    ar->inorder();

    try {
        search = ar->search(75);
        cout << "Se encontró el dato \\(^.^)/" << endl;
    } catch (int) {
        cout << "No se encontro el dato <:(" << endl;
        return 69;
    }

    ar->remove(52);

    ar->inorder();
}
