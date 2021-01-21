/* Ejercicio 12. Realice una función que tome como parámetros un vector y su tamaño y diga si el vector
está ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector salvo para la 0,
el elemento del vector es mayor o igual que el elemento que le precede en el vector.
*/

#include <iostream>

using namespace std;

void pedirDatos();
void comprobarOrdenamiento(int vec[], int);

int vec[100], tam;

int main() {
    pedirDatos();

    comprobarOrdenamiento(vec, tam);

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite el numero de elementos del vector: ";
    cin >> tam;

    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}

void comprobarOrdenamiento(int vec[], int tam) {
    char band = 'F';

    int i = 0;

    while((band == 'F') && (i < tam - 1)) {
        if(vec[i] > vec[i + 1]) {
            band = 'V';
        }

        i++;
    }

    if(band == 'F') {
        cout << "El arreglo esta ordenado crecientemente";
    }
    else {
        cout << "El arreglo no esta ordenado";
    }
}
