/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y
calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.
*/

#include <iostream>

using namespace std;

struct Promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno {
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio meanAlumno;
}alumnos[100];

int main() {
    int nAlumnos, posM;
    float promedio = 0, meanMayor = 0;

    cout << "Ingrese el numero de alumnos: ";
    cin >> nAlumnos;

    for(int i = 0; i < nAlumnos; i++) {
        cin.ignore();

        cout << "Digite su nombre: ";
        cin.getline(alumnos[i].nombre, 20, '\n');

        cout << "Digite el sexo: ";
        cin.getline(alumnos[i].sexo, 10, '\n');

        cout << "Digite su edad: ";
        cin >> alumnos[i].edad;

        cout << "Ingresar la nota 1: ";
        cin >> alumnos[i].meanAlumno.nota1;

        cout << "Ingresar la nota 2: ";
        cin >> alumnos[i].meanAlumno.nota2;

        cout << "Ingresar la nota 3: ";
        cin >> alumnos[i].meanAlumno.nota3;

        promedio = (alumnos[i].meanAlumno.nota1 + alumnos[i].meanAlumno.nota2 + alumnos[i].meanAlumno.nota3) / 3;

        if(promedio > meanMayor) {
            meanMayor = promedio;
            posM = i;
        }

        cout << endl;
    }

    cout << "\nDatos del alumno con mejor promedio: " << endl;
    cout << "Nombre: " << alumnos[posM].nombre << endl;
    cout << "Sexo: " << alumnos[posM].sexo << endl;
    cout << "Edad: " << alumnos[posM].edad << endl;
    cout << "Promedio: " << meanMayor;

    getchar();
    return 0;
}
