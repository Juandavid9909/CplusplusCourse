// Pasar una palabra a MAYUSCUA - funci�n strupr()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char palabra[] = "juan";

    strupr(palabra);

    cout << palabra << endl;

    system("pause");

    return 0;
}
