// Cadenas de caracteres

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char palabra[] = "Juan";
    char palabra2[] = {'J', 'u', 'a', 'n'};
    char nombre[30];

    cout << "Digite su nombre: ";
    // gets(nombre);
    cin.getline(nombre, 20, '\n');

    cout << nombre << endl;

    system("pause");

    return 0;
}
