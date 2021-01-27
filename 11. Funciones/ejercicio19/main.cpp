/* Ejercicio 19. Realide una función recursiva que sume los primeros n enteros positivos.
Nota: Para plantear la función recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente
recurrencia:

    suma(n) = 1              ,      si n = 1
              n + suma(n - 1),      si n > 1
*/

#include <iostream>

using namespace std;

int sumar(int);

int main() {
    int nElementos;

    do {
        cout << "Digite el numero de elementos: ";
        cin >> nElementos;
    }while(nElementos <= 0);

    cout << "\nLa suma es: " << sumar(nElementos) << endl;

    getchar();
    return 0;
}

int sumar(int n) {
    int suma = 0;

    if(n == 1) {
        suma = 1;
    }
    else {
        suma = n + sumar(n - 1);
    }

    return suma;
}
