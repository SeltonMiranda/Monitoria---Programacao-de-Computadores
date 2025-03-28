// Faça um program que leia um numero inteiro de 4 digitos e imprima o algarismo da casa da centenas

#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;

  cout << (numero / 100) % 10 << '\n';

  return 0;
}