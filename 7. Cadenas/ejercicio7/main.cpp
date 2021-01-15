/*7. Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, convertir
su nombre a minúsculas, caso contrario no convertirlo.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char nombre[20];

    cout << "Digite su nombre en mayusculas: ";
    cin.getline(nombre, 20, '\n');

    if(strncmp(nombre, "A", 1) == 0) {
        strlwr(nombre);
        cout << nombre << endl;
    }
    else {
        cout << "El nombre no comienza por la letra A" << endl;
    }

    getch();

    return 0;
}
