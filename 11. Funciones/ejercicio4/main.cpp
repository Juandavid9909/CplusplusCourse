/*Ejercicio 4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido
por el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.
*/

#include <iostream>

using namespace std;

// Prototipos de funciones
void pedirDatos();
float parteFraccionaria(float n);

float numero;

int main() {
    pedirDatos();

    cout << "La parte fraccionaria del numero es: " << parteFraccionaria(numero) << endl;

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite un numero: ";
    cin >> numero;
}

float parteFraccionaria(float n) {
    int entero = n;

    float resultado = n - entero;

    return resultado;
}
