/*8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
multiplicados por 2 y muestre el segundo arreglo.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros[5], numeros2[5];

    for(int i = 0; i < 5; i++) {
        cout << i + 1 << ". Digite los elementos del arreglo: ";
        cin >> numeros[i];
    }

    for(int i = 0; i < 5; i++) {
        numeros2[i] = numeros[i] * 2;
    }

    cout << "\nMostrando los elementos del arreglo por 2: " << endl;

    for(int i = 0; i < 5; i++) {
       cout << numeros2[i] << " ";
    }

    getch();

    return 0;
}
