// faça um programa que leia um numero inteiro de 4 digitos e imprima o algarismo correspondente a casa das unidades

#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;

  cout << numero % 10 << '\n';

  return 0;
}