// Pasar una palabra a min�sculas - funci�n strlwr()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char palabra[] = "JUAN";

    strlwr(palabra);

    cout << palabra << endl;

    // system("pause");

    return 0;
}
