/*5. Hacer 2 estructuras, una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3;
y otra llamada alumno que tendrá los siguientes campos: nombre, sexo, edad; hacer que la estructura promedio
este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio,
y por ultimo imprimir todos sus datos incluidos el promedio.
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
}alumno;

int main() {
    cout << "Digite su nombre: ";
    cin.getline(alumno.nombre, 20, '\n');

    cout << "Digite el sexo: ";
    cin.getline(alumno.sexo, 10, '\n');

    cout << "Digite su edad: ";
    cin >> alumno.edad;

    cout << "Ingresar la nota 1: ";
    cin >> alumno.meanAlumno.nota1;

    cout << "Ingresar la nota 2: ";
    cin >> alumno.meanAlumno.nota2;

    cout << "Ingresar la nota 3: ";
    cin >> alumno.meanAlumno.nota3;

    float promedio = (alumno.meanAlumno.nota1 + alumno.meanAlumno.nota2 + alumno.meanAlumno.nota3) / 3;

    cout << "\nDatos del alumno: " << endl;
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Sexo: " << alumno.sexo << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Promedio: " << promedio;

    getchar();
    return 0;
}
