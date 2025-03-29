/*
 * Faça um programa que leia uma quantidade arbitrária de números inteiros positivos terminada em zero. Identifique
 * o maior número inteiro divisível por 7 e, após a leitura dos dados, imprima esse número. 
 * 
 * O zero não deve ser processado.
 * Caso nenhum número seja divisível por 7, imprima "NENHUM"
 */

#include <iostream>

using namespace std;

int main() {
    int numero, maiorDiv7 = 0;

    cin >> numero;
    while (numero != 0) {
        if (numero % 7 == 0 && numero > maiorDiv7) {
            maiorDiv7 = numero;
        }
        cin >> numero;
    }

    if (maiorDiv7 == 0) {
        cout << "NENHUM\n";
    } else {
        cout << maiorDiv7 << '\n';
    }

    return 0;
}
