/*
 * Faça um programa que leia um sequência de números inteiros até que seja lido um número que seja o dobro ou metade
 * do anterior. Imprima a quantidade de números lidos, a soma dos números lidos e os números que forçaram a parada.
 */

#include <iostream>

using namespace std;

int main() {
    int numAnterior, numAtual, contador, soma;
    contador = 0;
    soma = 0;

    cin >> numAnterior;
    soma += numAnterior;
    contador++;

    cin >> numAtual;
    soma += numAtual;
    contador++;

    if (numAtual == 2 * numAnterior || numAtual == numAnterior / 2) {
        cout << contador << " " << soma << " " << numAnterior << " " << numAtual << "\n";
    } else {
        while (numAtual != 2 * numAnterior && numAtual != numAnterior / 2) {
            numAnterior = numAtual;
            cin >> numAtual;
            soma += numAtual;
            contador++;
        }
        cout << contador << " " << soma << " " << numAnterior << " " << numAtual << "\n";
    }

    return 0;
}
