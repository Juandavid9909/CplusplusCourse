/* Punteros - Declaración de Punteros

&n = La direccion de n
*n = La variable cuya dirección está almacenada en n
*/

#include <iostream>

using namespace std;

int main() {
    int num = 20;
    int *dir_num = &num;

    cout << "Numero: " << *dir_num << endl;
    cout << "Direccion de mem: " << dir_num << endl;

    getchar();
    return 0;
}
