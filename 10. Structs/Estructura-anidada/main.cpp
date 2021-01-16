#include <iostream>

using namespace std;

struct info_direccion {
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado {
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main() {
    for(int i = 0; i < 2; i++) {
        // Si el buffer se llena
        // fflush(stdin); // Vaciar el buffer y permitir digitar los valores

        cout << "Digite su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');

        cout << "Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');

        cout << "Digite la ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');

        cout << "Digite la provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');

        cout << "Digite el salario: ";
        cin >> empleados[i].salario;
        cin.ignore(); // Vaciar buffer
        cout << endl;
    }

    // Imprimiendo los datos
    for(int i = 0; i < 2; i++) {
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
    }

    getchar();
    return 0;
}
