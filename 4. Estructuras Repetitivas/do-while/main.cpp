/*La sentencia do while

    do {
        conjunto de instrucciones;
    }while(expresi�n l�gica);
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int i = 10;

    do {
        cout << i << endl;
        i--;
    }while(i >= 1);

    getchar();

    return 0;
}
