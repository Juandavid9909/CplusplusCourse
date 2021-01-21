/* Ejercicio 18. Escriba una función llamada mayor() que devuelva la fecha más reciente de cualquier par
de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(),
será devuelta la segunda fecha.
*/

#include <iostream>

using namespace std;

struct Fecha {
    int dia, mes, anio;
}f1, f2;

void pedirDatos();
Fecha mayor(Fecha, Fecha);
void muestra(Fecha);

int main() {
    pedirDatos();

    Fecha x = mayor(f1, f2);

    muestra(x);

    getchar();
    return 0;
}

void pedirDatos() {
    cout << "Digite la primera fecha: " << endl;
    cout << "Dia: ";
    cin >> f1.dia;

    cout << "Mes: ";
    cin >> f1.mes;

    cout << "Anio: ";
    cin >> f1.anio;

    cout << "Digite la segunda fecha: " << endl;
    cout << "Dia: ";
    cin >> f2.dia;

    cout << "Mes: ";
    cin >> f2.mes;

    cout << "Anio: ";
    cin >> f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2) {
    Fecha mayorFecha;

    if(f1.anio == f2.anio) {
        if(f1.mes == f2.anio) {
            if(f1.dia >= f2.dia) {
                mayorFecha = f1;
            }
            else {
                mayorFecha = f2;
            }
        }
        else if(f1.mes > f2.mes) {
            mayorFecha = f1;
        }
        else {
            mayorFecha = f2;
        }
    }
    else if(f1.anio > f2.anio) {
        mayorFecha = f1;
    }
    else {
        mayorFecha = f2;
    }

    return mayorFecha;
}

void muestra(Fecha x) {
    cout << "\nLa fecha mas reciente es: " << x.dia << "/" << x.mes << "/" << x.anio << endl;
}
