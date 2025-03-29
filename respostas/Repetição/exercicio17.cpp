/*
 * Faça um programa que leia um número maior que 1. Indique se esse número é primo, imprima "SIM" caso seja e "NAO",
 * caso contrário.
 * 
 * Dica: Use a função sqrt() da biblioteca <cmath>
 */

#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int numero;
    bool ehPrimo = true;

    cin >> numero;

    if (numero == 2) {
        cout << "SIM\n";
        return 0;
    }

    if (numero % 2 == 0) {
        cout << "NAO\n";
        return 0;
    }

    for (int i = 3; i <= sqrt(numero); i += 2) {
        if (numero % i == 0) {
            ehPrimo = false;
            break;
        }
    }

    if (ehPrimo) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}
