/* Ejercicio 6. Escriba una plantilla de función llamada maximo() que devuelva el valor máximo
de tres argumentos que se transmitan a la función cuando sea llamada. Suponga que los tres
argumentos serán del mismo tipo de datos.
*/

#include <iostream>

using namespace std;

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main() {
    int dato1 = 4, dato2 = 6, dato3 = 8;

    cout << "El maximo valor es: " << maximo(dato1, dato2, dato3) << endl;

    getchar();
    return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3) {
    T maxi;

    if((dato1 >= dato2) && (dato1 >= dato3)) {
        maxi = dato1;
    }
    else if((dato2 >= dato1) && (dato2 >= dato3)) {
        maxi = dato2;
    }
    else {
        maxi = dato3;
    }
}
