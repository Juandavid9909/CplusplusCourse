/*
Ejemplo: Sacar el valor absoluto de un número
*/

#include <iostream>

using namespace std;

// Prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main() {
    mostrarAbs(-4);
    mostrarAbs(-56.67);
    mostrarAbs(-123.5678);

    getchar();
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero) {
    if(numero < 0) {
        numero *= -1;
    }

    cout << "El valor absoluto del numero es: " << numero << endl;
}
