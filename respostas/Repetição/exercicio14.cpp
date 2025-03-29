/*
 * No tabuleiro de xadrez, a casa na linha 1, coluna 1 é branca e as cores das casas se alternam em brancas e pretas. 
 * No xadrez tradicional, 8x8 a cas na linha 8 e coluna 8 também será branca.
 * Faça um programa que leia dois números, a linha e a coluna do tabuleiro e indique se a cor é preta ou branca.
 */

#include <iostream>

using namespace std;

int main() {
    int linha, coluna;

    cin >> linha >> coluna;

    if ((linha + coluna) % 2 == 0) {
        cout << "BRANCA\n";
    } else {
        cout << "PRETA\n";
    }

    return 0;
}