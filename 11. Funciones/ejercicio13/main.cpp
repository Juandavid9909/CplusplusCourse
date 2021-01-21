/* Ejercicio 13. Realiza una función que tome como parámetros un vector de números y su tamaño y cambie
el signo de los elementos del vector.
*/

#include <iostream>

using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);

int vec[100], tam;

int main() {
    pedirDatos();

    cambiarSigno(vec, tam);

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite el numero de elementos: ";
    cin >> tam;

    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". Digite el valor: ";
        cin >> vec[i];
    }
}

void cambiarSigno(int vec[], int tam) {
    for(int i = 0; i < tam; i++) {
        vec[i] *= -1;

        cout << vec[i] << " ";
    }
}
