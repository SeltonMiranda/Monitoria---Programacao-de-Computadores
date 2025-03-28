// Faça um programa que imprima "SIM" se o numero inteiro lido do teclado eh multiplo de 3 ou "NAO", caso contrario

#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;

  if (numero % 3 == 0) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }

  return 0;
}