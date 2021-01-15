// Comparar cadenas - función strcmp()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char palabra1[] = "becerro";
    char palabra2[] = "avion";

    if(strcmp(palabra1, palabra2) > 0) {
        cout << palabra1 << " esta despues alfabeticamente" << endl;
    }

    system("pause");

    return 0;
}
