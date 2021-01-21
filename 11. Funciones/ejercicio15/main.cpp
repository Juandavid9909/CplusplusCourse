/* Ejercicio 15.
*/

#include <iostream>

using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100], int, int);

int m[100][100], nFilas, nCol;

int main() {
    pedirDatos();
    comprobarSimetria(m, nFilas, nCol);

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
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void comprobarSimetria(int m[][100], int nFilas, int nCol) {
    int cont = 0;

    if(nFilas == nCol) {
        for(int i = 0; i < nFilas; i++) {
            for(int j = 0; j < nCol; j++) {
                if(m[i][j] == m[j][i]) {
                    cont++;
                }
            }
        }
    }

    if(cont == nFilas * nCol) {
        cout << "\nLa matriz es simetrica";
    }
    else {
        cout << "\nLa matriz no es simetrica";
    }
}
