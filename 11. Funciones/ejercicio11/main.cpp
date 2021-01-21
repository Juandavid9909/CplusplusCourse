/* Ejercicio 11. Realice una función que tome como parámetros un vector de números enteros y devuelva
la suma de sus elementos.
*/

#include <iostream>

using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vect[100], tam;

int main() {
    pedirDatos();

    cout << "\nLa suma de los elementos del vector es: " << calcularSuma(vec, tam) << endl;

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite el numero de elementos del vector: ";
    cin >> tam;

    for(int i = 0: i < tam; i++) {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}

int calcularSuma(int vec[], int tam) {
    int suma;

    for(int i = 0; i < tam; i++ {
        suma += vec[i];
    }

    return suma;
}
