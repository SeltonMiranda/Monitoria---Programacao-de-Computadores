/*
 * Faça um programa que calcule o valor da soma dos quadrados dos primeiros 20 números positivos nào nulos.
 * Imprima na tela.
 * Este programa não tem entrada, somente saída.
 */


#include <iostream>

using namespace std;

int main() {
  int n, soma, contador;

  n = 50;
  soma = 0;
  contador = 1;
  
  while (contador <= n) {
    soma += contador * contador;
    contador++;
  }

  cout << soma << "\n";
  

  return 0;
}