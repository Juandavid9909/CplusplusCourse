// Longitud de una cadena de caracteres - funci�n strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char palabra[] = "hola que tal?";
    int longitud = strlen(palabra);

    cout << "Numero de elementos de la cadena es: " << longitud << endl;

    getch();

    return 0;
}
