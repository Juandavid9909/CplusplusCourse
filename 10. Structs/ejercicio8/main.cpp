/*8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos:
el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas
que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad.
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Persona {
    char nombre[30];
    bool discapacidad;
}personas[100], personasSinD[100], personasConD[100];

// personasSinD = personas sin discapacidad
// personasConD = personas con discapacidad

int main() {
    int nPersonas;

    cout << "Ingrese el numero de personas: ";
    cin >> nPersonas;

    int posS = 0, posC = 0;

    for(int i = 0; i < nPersonas; i++) {
        cin.ignore();

        cout << i + 1 << ". Ingrese el nombre: ";
        cin.getline(personas[i].nombre, 30, '\n');

        cout << i + 1 << ". Ingrese 1 si tiene alguna discapacidad, de lo contrario 0: ";
        cin >> personas[i].discapacidad;

        if(personas[i].discapacidad) {
            strcpy(personasConD[posC].nombre, personas[i].nombre);
            personasConD[posC].discapacidad = personas[i].discapacidad;

            posC++;
        }

        if(!personas[i].discapacidad) {
            strcpy(personasSinD[posS].nombre, personas[i].nombre);
            personasSinD[posS].discapacidad = personas[i].discapacidad;

            posS++;
        }

        cout << endl;
    }

    if(posC > 0) {
        cout << "\nDatos personas con discapacidad: " << endl;

        for(int i = 0; i < posC; i++) {
            cout << i + 1 << ". Nombre: " << personasConD[i].nombre << endl;
        }
    }

    if(posS > 0) {
        cout << "\nDatos personas con discapacidad: " << endl;

        for(int i = 0; i < posS; i++) {
            cout << i + 1 << ". Nombre: " << personasSinD[i].nombre << endl;
        }
    }

    getchar();
    return 0;
}
