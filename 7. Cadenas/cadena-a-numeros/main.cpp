// Transformar una cadena a números - función atoi() y atof()

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char cad[] = "123.456";
    // int numero = atoi(cad);
    float numero = atof(cad);

    cout << numero << endl;

    system("pause");

    return 0;
}
