/*Ejercicio 1: Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros,
multiplique estos dos números y despliegue el resultado.
*/

#include <iostream>

using namespace std;

// Prototipos de funciones
void pedirDatos();
void mult(float x, float y);

float num1, num2;

int main() {
    pedirDatos();
    mult(num1, num2);

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite 2 numeros: ";
    cin >> num1 >> num2;
}

void mult(float x, float y) {
    float multiplicacion = x * y;

    cout << "La multiplicacion es: " << multiplicacion << endl;
}
