#include <iostream>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}persona1;

int main() {
    cout << "Nombre: ";
    cin.getline(persona1.nombre, 20, '\n');

    cout << "Edad: ";
    cin >> persona1.edad;

    cout << "\nImprimiendo datos" << endl;
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad;

    getchar();
    return 0;
}
