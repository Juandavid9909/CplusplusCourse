/* Ejercicio 16. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor
de los elementos almacenados en dicha fila;
*/

#include <iostream>

using namespace std;

void pedirDatos();
int devolverMenor(int m[][100], int);

int m[100][100], nFilas, nCol;

int main() {
    pedirDatos();

    int menor;

    cout << "\nDigite el numero de fila para comprobar el menor elemento: ";
    cin >> menor;

    cout << "El menor elemento es: " << devolverMenor(m, menor);

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite el numero de filas: ";
    cin >> nFilas;

    cout << "Digite el numero de columnas: ";
    cin >> nCol;

    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            cout << "Digite el valor de [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

int devolverMenor(int m[][100], int fila) {
    int menor = 100;

    for(int i = 0; i < nCol; i++) {
        if(m[fila][i] < menor) {
            menor = m[fila][i];
        }
    }

    return menor;
}
