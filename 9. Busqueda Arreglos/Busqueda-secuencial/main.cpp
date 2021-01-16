#include <iostream>

using namespace std;

int main() {
    char a[] = {'e', 'i', 'o', 'a', 'u'};
    char dato = 'o';
    char band = 'F';

    // Busqueda Secuencial
    int i = 0;

    while((band == 'F') && (i < 5)) {
        if(a[i] == dato) {
            band = 'V';
        }
        i++;
    }

    if(band == 'F') {
        cout << "El numero a buscar no existe en el arreglo";
    }
    else if(band == 'V') {
        cout << "El numero ha sido encontrado en la pos: " << i - 1 << endl;
    }

    getchar();
    return 0;
}
