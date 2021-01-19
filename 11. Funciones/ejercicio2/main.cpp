/*Ejercicio 2. Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se
le transmite y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números
flotantes.
*/

#include <iostream>

using namespace std;

// Prototipos de funciones
void pedirDatos();
void al_cuadrado(float n);

float numero;

int main() {
    pedirDatos();
    al_cuadrado(numero);

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite un numero: ";
    cin >> numero;
}

void al_cuadrado(float n) {
    float elevacion = n * n;

    cout << "El numero al cuadrado es: " << elevacion << endl;
}
