/*5. Desarrolle un programa que lea de la entrada estándar un vector de enteros
y determine el mayor elemento del vector.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numeros[100], n, mayor = 0;

    cout << "Digite el numero de elementos del arreglo: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << i + 1 << ". Digite un numero: ";
        cin >> numeros[i];

        if(numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "\nEl mayor elemento del vector es: " << mayor << endl;

    system("pause");

    return 0;
}
