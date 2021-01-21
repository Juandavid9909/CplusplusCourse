#include <iostream>

using namespace std;

int factorial(int);

int main() {
    cout << "Factorial: " << factorial(3);

    getchar();
    return 0;
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    n *= factorial(n - 1);
}
