#include <iostream>

using namespace std;

void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3], int, int);

int main() {
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1, 2, 3}, {4, 5, 6}};

    mostrarMatriz(m, NFILAS, NCOL);
    calcularCuadrado(m, NFILAS, NCOL);
    mostrarMatrizElevada(m, NFILAS, NCOL);

    getchar();
    return 0;
}

void mostrarMatriz(int m[][3], int nFilas, int nCol) {
    cout << "Mostrando matriz original: " << endl;

    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}

void calcularCuadrado(int m[][3], int nFilas, int nCol) {
    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            m[i][j] *= m[i][j];
        }
    }
}

void mostrarMatrizElevada(int m[][3], int nFilas, int nCol) {
    cout << "\nMostrando matriz elevada al cuadrado: " << endl;

    for(int i = 0; i < nFilas; i++) {
        for(int j = 0; j < nCol; j++) {
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}
