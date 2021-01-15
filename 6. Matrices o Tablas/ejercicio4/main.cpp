/*4. Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.*/

#include <iostream>

#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int numeros[100] [100], dato, nFilas, nCol;
    int numeros2[100][100];

    cout << "Digite le numero de filas: " ;
    cin >> nFilas;

    cout << "Digite el numero de columnas: ";
    cin >> nCol;

    srand(time(NULL));

    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            dato = 1 + rand() % (100);
            numeros[i][j] = dato;
        }
    }

    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            numeros2[i][j] = numeros[i][j];
        }
    }

    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            cout << numeros2[i][j] << " ";
        }
        cout << endl;
    }

    getch();

    return 0;
}
