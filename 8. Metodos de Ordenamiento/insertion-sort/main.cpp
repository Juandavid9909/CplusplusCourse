#include <iostream>

using namespace std;

int main() {
    int numeros[] = {4, 2, 3, 1, 5};
    int aux, pos;

//    for(int i = 1; i < 5; i++) {
//        for(int j = i; j > 0; j--) {
//            if(numeros[j] < numeros[j - 1]) {
//                aux = numeros[j - 1];
//                numeros[j - 1] = numeros[j];
//                numeros[j] = aux;
//            }
//        }
//    }

    for(int i = 0; i < 5; i++) {
        pos = i;
        aux = numeros[i];

        while((pos > 0) && (numeros[pos - 1] > aux)) {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout << "Orden Ascendente: ";

    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nOrden Descendente: ";

    for(int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    // Complejidad O(n²)

    getchar();
    return 0;
}
