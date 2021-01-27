/* Transmisión de arreglos

Ejemplo: Hallar el máximo elemento de un arreglo.
*/

#include <iostream>

using namespace std;

int hallarMax(int *, int);

int main() {
    const int nElementos = 5;
    int numeros[nElementos] = {3, 4, 2, 8, 1};

    cout << "El mayor elemento es: " << hallarMax(numeros, nElementos);

    getchar();
    return 0;
}

int hallarMax(int *dirVec, int nElementos) {
    int maxi = 0;

    for(int i = 0; i < nElementos; i++) {
        if(*(dirVec + i) > maxi) {
            maxi = *(dirVec + i);
        }
    }

    return maxi;
}
