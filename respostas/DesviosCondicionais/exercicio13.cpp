/*
 * Faça um programa que leia três numeros inteiros do teclado correspondendo aos lados de um triângulo,
 e verifique se é um triângulo isósceles, escaleno ou equilátero. Caso não seja nenhum, imprima "INVALIDO"
 */

#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a >= b + c || b >= a + c || c >= a + b) {
    cout << "INVALIDO\n";
  }

  if (a == b && b == c && a == c) {
    cout << "EQUILATERO\n";
  } else if (a == b && a != c || a == c && a != b || b == c && b != a) {
    cout << "ISOSCELES\n";
  } else if (a != b && a != c && b != c) {
    cout << "ESCALENO\n";
  }

  return 0;
}