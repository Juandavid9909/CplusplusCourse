/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
nombre, país, numero_medallas, y devuelva los datos (Nombre país) del atleta que ha ganado el mayor
número de medallas
*/

#include <iostream>

using namespace std;

struct Atleta {
    char nombre[20];
    char pais[20];
    int numero_medallas;
}atletas[100];

int main() {
    int nAtletas, masMedallas = 0, posM;

    cout << "Ingrese el numero de atletas que desea digitar: ";
    cin >> nAtletas;

    for(int i = 0; i < nAtletas; i++) {
        cin.ignore();

        cout << i + 1 << ". Digite el nombre: ";
        cin.getline(atletas[i].nombre, 20, '\n');

        cout << i + 1 << ". Digite el pais: ";
        cin.getline(atletas[i].pais, 20, '\n');

        cout << i + 1 << ". Digite el numero de medallas ganadas: ";
        cin >> atletas[i].numero_medallas;

        if(atletas[i].numero_medallas > masMedallas) {
            masMedallas = atletas[i].numero_medallas;
            posM = i;
        }

        cout << endl;
    }

    cout << "\n\nDatos atleta con más medallas: " << endl;
    cout << "Nombre: " << atletas[posM].nombre << endl;
    cout << "Pais: " << atletas[posM].pais << endl;
    cout << "Numero de medallas ganadas: " << atletas[posM].numero_medallas;

    getchar();
    return 0;
}
