/* Ejercicio 2. Determinar si un número es primo o no; con punteeros y además indicar en que posición
de memoria se guardó el número
*/

#include <iostream>

using namespace std;

int main() {
    int numero, *dir_numero, cont = 0;

    cout << "Digite un numero: ";
    cin >> numero;

    dir_numero = &numero;

    for(int i = 1; i < *dir_numero; i++) {
        if(*dir_numero % i == 0) {
            cont++;
        }
    }

    if(cont > 2) {
        cout << "El numero " << *dir_numero << " NO es primo" << endl;
        cout << "Posicion: " << dir_numero << endl;
    }
    else {
        cout << "El numero " << *dir_numero << " es primo" << endl;
        cout << "Posicion: " << dir_numero << endl;
    }

    getchar();
    return 0;
}
