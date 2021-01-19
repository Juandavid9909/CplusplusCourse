/* Ejercicio 9. Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado
totalSeg y tres parámetros de referencia enteros nombrados horas, min, y seg. La función es convertir
el número de segundos transmitido en un número equivalente de horas, minutos y segundos.
*/

#include <iostream>

using namespace std;

void tiempo(int, int&, int&, int&);

int main() {
    int totalSeg, horas, minu, seg;

    cout << "Digite el numero total de segundos: ";
    cin >> totalSeg;

    tiempo(totalSeg, horas, minu, seg);

    cout << "Tiempo equivalente a la cantidad de segundos digitados: " << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minu << endl;
    cout << "Segundos: " << seg << endl;

    getchar();
    return 0;
}

void tiempo(int totalSeg, int &horas, int &minu, int &seg) {
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    minu = totalSeg / 60;
    seg = totalSeg % 60;
}
