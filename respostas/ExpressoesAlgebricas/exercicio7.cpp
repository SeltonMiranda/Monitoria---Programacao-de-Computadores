/*
 * Dado um numero inteiro que representa a quantidade em segundos, faça um programa que imprima o equivalente em
 * horas, minutos e segundos, nesta ordem.
 * 
 * Exemplo 1
 * Entrada: 3600 
 * Saida: 1:0:0
 * 
 * Exemplo 2
 * Entrada: 3500
 * Saida: 0:58:20
 * 
 */

#include <iostream>

using namespace std;

int main() {
  int horas, minutos, segundos;
  horas = 0;
  minutos = 0;

  cin >> segundos;

  while (segundos >= 3600) {
    segundos -= 3600;
    horas++;
  }

  while (segundos >= 60) {
    segundos -= 60;
    minutos++;
  }

  cout << horas << ":" << minutos << ":" << segundos << '\n';
  return 0;
}