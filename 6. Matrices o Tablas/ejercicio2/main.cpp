/*2. Realiza un programa que defina una matris de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << numeros[i][j];
        }
        cout << endl;
    }

    // Mostrando diagonal principal
    for(int i = 0; i < 3; i++) {
        cout << numeros[i][i] << endl;
    }

    getch();

    return 0;
}
