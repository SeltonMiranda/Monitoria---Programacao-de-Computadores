#include <iostream>
#include <math.h>
using namespace std;

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    } 

    if (numero == 2) {
        return true;
    }

    for (int i = 3; i < sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 2; i < 10000; i++) {
        if (ehPrimo(i)) {
            cout << i;
        }
    }
    return 0;
}