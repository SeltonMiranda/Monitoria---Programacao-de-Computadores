/*
 * Uma série de pares valor-quadrado na matemática é dada pela presença de elementos númericos, organizados em 
 * sequência dois-a-dois, em que cada número é seguido de seu quadrado exatamente uma vez.
 * 
 * Faça um programa que leia uma quantidade arbitrária de números inteiros e indique se é do tipo valor-quadrado,
 * imprimindo "SIM" ou "NAO", caso contrário. A sequência termina em zero, que não deve ser processado.
 * 
 * Exemplo
 * Entrada: 25 625 7 49 10 100 0
 * Saída: "SIM"
 * 
 * Entrada: 6 36 4 16 9 30 0
 * Saída: "NAO"
 */

#include <iostream>

using namespace std;

int main() {
    int numAnterior, numAtual;
    bool ehValorQuadrado = true;

    cin >> numAnterior;
    if (numAnterior == 0) {
        cout << "NAO\n";
        return 0;
    }

    cin >> numAtual;
    while (numAtual != 0) {
        if (numAtual != numAnterior * numAnterior) {
            ehValorQuadrado = false;
        }
        numAnterior = numAtual;
        cin >> numAtual;
    }

    if (ehValorQuadrado) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}
