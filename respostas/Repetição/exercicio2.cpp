/*
 * Faça um programa que leia do teclado um número N e imprima os N primeiros números a partir do 0.
 */

#include <iostream>

using namespace std;

int main() {
  int n, contador;
  cin >> n;

  contador = 1;
  while (contador <= n) {
    cout << contador << ' ';
    contador++;
  }


  return 0;
}