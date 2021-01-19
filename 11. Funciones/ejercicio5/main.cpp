/* Ejercicio 5. Escriba una plantilla de función llamada despliegue() que despliegue el valor del
argumento único que se le transmite cuando es invocada la función.
*/

#include <iostream>

using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main() {
    despliegue(4);
    despliegue(15.67);
    despliegue(567.7890);
    despliegue('a');

    getchar();
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato) {
    cout << "EL dato es: " << dato << endl;
}
