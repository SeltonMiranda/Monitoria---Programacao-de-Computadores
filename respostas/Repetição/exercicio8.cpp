/*
 * Faça um programa que leia um número inteiro N e leia N números reais e faça a média aritmética deles. Imprima na tela
 */

#include <iostream>

using namespace std;

int main() {
  int n, soma, contador, num;
  soma = 0;
  contador = 0;
  cin >> n;
  while (contador < n) {
    cin >> num;  
    soma += num;
    contador++;
  }

  cout << soma/n << '\n';
  return 0;
}