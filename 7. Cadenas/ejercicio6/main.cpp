/*6. Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas, y decir si son iguales o no*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char palabra1[20], palabra2[20];

    cout << "Digite una palabra: ";
    cin.getline(palabra1, 20, '\n');

    cout << "Digite otra palabra: ";
    cin.getline(palabra2, 20, '\n');

    strupr(palabra1);
    strupr(palabra2);

    if(strcmp(palabra1, palabra2) == 0) {
        cout << "Ambas palabras son iguales";
    }
    else {
        cout << "Las palabras son distintas";
    }

    getch();

    return 0;
}
