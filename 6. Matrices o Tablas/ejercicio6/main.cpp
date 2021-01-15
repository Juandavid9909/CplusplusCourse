/*6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros[3][3] = {{1, 0, 4}, {2, 3, 2}, {1, 4, 1}};
    int numeros2[3][3] = {{1, 3, 2}, {4, 1, 1,}, {1, 1, 2}};

    cout << "Mostrando las 2 matrices: " << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << numeros[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << numeros2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nLa suma de las 2 matrices es: " << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << numeros[i][j] + numeros2[i][j] << " ";
        }
        cout << endl;
    }

    getch();

    return 0;
}
