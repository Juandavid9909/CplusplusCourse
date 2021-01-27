#include <iostream>

using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int *dir_numeros = numeros;

    for(int i = 0; i < 5; i++) {
        cout << "Elemento del vector [" << i << "]: " << *dir_numeros++ << " - " << dir_numeros++ << endl;
    }

    getchar();
    return 0;
}
