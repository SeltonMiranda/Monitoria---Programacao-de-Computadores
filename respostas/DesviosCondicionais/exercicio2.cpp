// Faça um programa que leia um numero do teclado e imprima o cubo do numero se for positivo ou o quadrado se for negativo

#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;

  if (numero >= 0) {
    cout << numero * numero * numero << '\n';
  } else {
    cout << numero * numero << '\n';
  }

  return 0;
}