// Faça um programa que leia um numero do teclado e imprima "SIM" se ele está compreendido i
// entre 40 (inclusive) e 70 (inclusive) ou "NAO", caso contrário


#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;

  if (40 <= numero && numero <= 70) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }

  return 0;
}