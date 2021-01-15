#include <iostream>

using namespace std;

int main() {
    int numeros[] = {4, 1, 2, 3, 5};
    int aux = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(numeros[j] > numeros[j + 1]) {
                aux = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    cout << "Orden Ascendente: ";
    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nOrden Descendente: ";
    for(int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    // Complejidad O(n^2)

    getchar();
    return 0;
}
