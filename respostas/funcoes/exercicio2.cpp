#include <iostream>
using namespace std;

bool ehBinario(int numero) {
    while (numero != 0) {
        int resto = numero % 10;
        if (resto != 0 || resto != 1) {
            return false;
        }
        numero = numero / 10;
    }
    return true;
}

int main() {
    int numero;
    cin >> numero;
    if (ehBinario(numero)) {
        cout << "sim";
    } else {
        cout << "nao";
    }
    return 0;
}