/*3. Escribe un programa que lea de la entrada est�ndar un vector de n�meros y muestre
en la salida est�ndar los n�meros del vector con sus �ndices asociados*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numeros[100], n;

    cout << "Digite el numero de elementos que va a tener el arreglo: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Digite un numero: ";
        cin >> numeros[i];
    }

    for(int i = 0; i < n; i++) {
        cout << i << " -> " << numeros[i] << endl;
    }

    system("pause");

    return 0;
}
