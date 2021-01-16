/*7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura
debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el
tiempo total empleado en correr todas las etapas.
*/

#include <iostream>

using namespace std;

struct Etapa {
    int horas;
    int minutos;
    int segundos;
}etapas[100];

int main() {
    int nEtapas, horas = 0, minutos = 0, segundos = 0;

    cout << "Ingrese el numero de etapas: ";
    cin >> nEtapas;

    for(int i = 0; i < nEtapas; i++) {
        cin.ignore();

        cout << "Ingrese los segundos: ";
        cin >> etapas[i].segundos;

        cout << "Ingrese los minutos: ";
        cin >> etapas[i].minutos;

        cout << "Ingrese las horas: ";
        cin >> etapas[i].horas;

        segundos += etapas[i].segundos;
        minutos += etapas[i].minutos;
        horas += etapas[i].horas;

        if(segundos >= 60) {
            minutos += (segundos / 60);
            segundos -= 60;
        }

        if(minutos >= 60) {
            horas += (minutos / 60);
            minutos -= 60;
        }

        cout << endl;
    }

    cout << "El tiempo total de la etapa fue: " << endl;
    cout << horas << ":" << minutos << ":" << segundos;

    getchar();
    return 0;
}
