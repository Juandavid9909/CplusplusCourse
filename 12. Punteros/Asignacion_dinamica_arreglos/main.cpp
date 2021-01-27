/* Asignación dinámica de arreglos

new: Reserva el número de bytes solicitado por la declaración.
delete: Libera un bloque de bytes reservado con anterioridad

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico
*/

#include <iostream>
#include <stdlib.h> // Funciona new y delete

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main() {
    pedirNotas();
    mostrarNotas();

    delete[] calif; // Liberando el espacio en bytes utilizados anteriormente

    getchar();
    return 0;
}

void pedirNotas() {
    cout << "Digite el numero de calificaciones: ";
    cin >> numCalif;

    calif = new int[numCalif];

    for(int i = 0; i < numCalif; i++) {
        cout << "Ingrese una nota: ";
        cin >> calif[i];
    }
}

void mostrarNotas() {
    cout << "\n\nMostrando notas del usuario:\n";

    for(int i = 0; i < numCalif; i++) {
        cout << calif[i] << endl;
    }
}
