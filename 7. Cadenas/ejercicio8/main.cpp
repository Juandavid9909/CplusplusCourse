/*8. Pedir al usuario 2 cadenas de caracteres de n�meros, uno entero y el otro real, convertirlo
a sus respectivos valores y por �ltimo sumarlos.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
    char cad1[10], cad2[10];
    int valorEntero;
    float valorFlotante;

    cout << "Digite un valor entero: ";
    cin.getline(cad1, 10, '\n');

    cout << "Digite un valor flotante: ";
    cin.getline(cad2, 10, '\n');

    valorEntero = atoi(cad1);
    valorFlotante = atof(cad2);

    cout << "La suma es: " << valorEntero + valorFlotante << endl;

    getch();

    return 0;
}
