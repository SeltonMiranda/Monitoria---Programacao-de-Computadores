/*
 *  Faça um programa que leia uma sequência de de números inteiros terminada em zero e imprima o menor e maior valor
 *  dessa sequência. O valor zero não deve ser processado. 
 */

#include <iostream>

using namespace std;

int main() {
  int num, maior, menor;
  cin >> num;
  maior = menor = num;
  while (num != 0) {
    if (num > maior) {
      maior = num;
    } else if (num < menor) {
      menor = num;
    }
    cin >> num;
  }

  cout << menor << " " << maior << "\n";

  return 0;
}