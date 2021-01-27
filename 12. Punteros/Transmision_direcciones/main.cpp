/* Transmisión de direcciones

Ejemplo: Intercambiar el valor de 2 variables.
*/

#include <iostream>

using namespace std;

void intercambio(float *, float *);

int main() {
    float num1 = 20.8, num2 = 6.78;

    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    intercambio(&num1, &num2);

    cout << "\n\nDespues del intercambio:" << endl;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    getchar();
    return 0;
}

void intercambio(float *dirNm1, float *dirNm2) {
    float aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}
