/*4. Crear una cadena que tenga la siguiente frace "Hola que tal", luego crear otra cadena para
preguntarle al usuario su nombre, por �ltimo a�adir el nombre al final de la primera cadena y
mostrar el mensaje completo "Hola que tal (nombreDelUsuario)."*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cad[] = "Hola que tal ";
    char cad2[20];

    cout << "Digite su nombre: ";
    cin.getline(cad2, 20, '\n');

    strcat(cad, cad2);

    cout << "Frase: " << cad << endl;

    getch();

    return 0;
}
