/*
 * Faça um programa que leia dois números ímpares positivos A e B (onde A <= B) e imprima o produto dos números ímpares de A até B.
 * Imprima "ERRO" caso os números lidos não satisfaçam as condições. 
 */

#include <iostream>

using namespace std;

int main() {
  int a, b, produto;
  cin >> a >> b;
  if (a > b) {
    cout << "ERRO\n";
  } else if (a % 2 == 0 || b % 2 == 0) {
    cout << "ERRO\n";
  } else {

    produto = 1;
    while (a <= b) {
      produto *= a;
      a += 2;
    }

    cout << produto << "\n";
  }

  return 0;
}