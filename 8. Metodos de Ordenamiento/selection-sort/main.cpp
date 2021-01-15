#include <iostream>

using namespace std;

int main() {
    int numeros[] = {4, 2, 3, 1, 5};
    int aux = 0;
    int menor;

    for(int i = 0; i < 5; i++) {
        menor = i;
        for(int j = i + 1; j < 5; j++) {
            if(numeros[j] < numeros[menor]) {
                menor = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[menor];
        numeros[menor] = aux;
    }

    cout << "Orden Ascendente: ";

    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nOrden Descendente: ";

    for(int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    getchar();
    return 0;
}
