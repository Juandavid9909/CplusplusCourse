/* Ejercicio 22. Escriba una función escribeNumeros(int ini, int fin) que devuelva en la salida estándar
los números del ini al fin. Escriba una versión que muestre los números en orden ascendente.
*/

#include <iostream>

using namespace std;

int escribeNumeros(int, int);

int main() {
    int ini, fin;

    cout << "Digite un inicio: ";
    cin >> ini;
    cout << "Digite un final: ";
    cin >> fin;

    for(int i = ini; i <= fin; i++) {
        cout << escribeNumeros(i, fin) << " ";
    }

    getchar();
    return 0;
}

int escribeNumeros(int ini, int fin) {
    if(ini == fin) {
        return ini;
    }
    else {
        return escribeNumeros(ini, fin - 1);
    }
}
