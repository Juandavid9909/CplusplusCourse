/* Ejercicio 21. Escriba una función recursiva que calcule un número elevado a una potencia entera mayor
o igual que cero: x^y
*/

#include <iostream>

using namespace std;

int potencia(int, int);

int main() {
    int base, exponente;

    cout << "Digite la base: ";
    cin >> base;
    cout << "Digite el exponente: ";
    cin >> exponente;

    cout << "\nLa potencia de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << endl;

    getchar();
    return 0;
}

int potencia(int x, int y) {
    int pot;

    if(y == 1) {
        pot = x;
    }
    else {
        pot = x * potencia(x, y - 1);
    }

    return pot;
}
