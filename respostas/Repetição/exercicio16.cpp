/*
 * Um número inteiro positivo é dito triangular se é produto de três valores naturais consecutivos. 
 * 120 é triangular pois 4 x 5 x 6 = 120
 * 
 * Faça um programa que leia um número inteiro positivo e verifique se ele é triangular, imprimindo "SIM",
 * caso contrário imprima "NAO".
 */

#include <iostream>

using namespace std;

int main() {
    int numero, contador;
    bool ehTriangular;

    cin >> numero;
    ehTriangular = false;
    contador = 1;

    while (contador * (contador + 1) * (contador + 2) < numero) {
        contador++;
    }

    if (contador * (contador + 1) * (contador + 2) == numero) {
        ehTriangular = true;
    }

    if (ehTriangular) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}