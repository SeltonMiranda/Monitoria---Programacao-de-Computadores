/*
 * Faça um programa que leia um sequência de números inteiros positivos, terminada em zero,
 * que represetam as medidas do lados de um polígono. Imprima "SIM" se ele é um polígono regular
 * (todos os lados iguais) e "NAO" caso contrário.
 * 
 * Observação: Um polígono deve ter ao menos 3 lados. O zero serve para indicar o final da entrada de dados
 * e não deve ser processado.
 */

#include <iostream>

using namespace std;

int main() {
    int ladoAnterior, ladoAtual, numLados = 0;
    bool ehRegular = true;

    cin >> ladoAnterior;

    if (ladoAnterior == 0) {
        cout << "NAO\n";
        return 0;
    }

    numLados = 1;
    cin >> ladoAtual;

    while (ladoAtual != 0) {
        if (ladoAtual != ladoAnterior) {
            ehRegular = false;
        }
        numLados++;
        ladoAnterior = ladoAtual;
        cin >> ladoAtual;
    }

    if (ehRegular && numLados >= 3) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}
