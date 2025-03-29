/*
 * Faça um programa que leia um número N que imprima a soma dos N primeiros números da sequência de Fibonacci. 
 * Os primeiros dois números da sequência são 0 e 1 e os próximos são dados pela soma dos dois últimos números
 * anteriormente calculados.
 * 
 * Por exemplo, os primeiros oito números da sequência são: 0, 1, 1, 2, 3, 5, 8, 13
 */

#include <iostream>

using namespace std;

int main() {
  int n, contador, soma;
  int atual, anterior, proximo;
  cin >> n;

  anterior = 0;
  atual = 1;
  contador = 2;
  soma = atual + anterior;

  while (contador < n) {
    proximo = atual + anterior;
    anterior = atual;
    atual = proximo;
    soma += atual;
    contador++;
  }

  cout << soma << '\n';

  return 0;
}