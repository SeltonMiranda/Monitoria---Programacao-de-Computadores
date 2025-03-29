/*
 * Faça um programa que leia um dígito "d" de 0 a 9 e um número inteiro positivo "n". Conte quantos dígitos "d" 
 * existem em "n". Caso não tenha nenhum, imprima "NENHUM", senão imprima a quantidade de dígitos "d" presentes.
 * 
 */

#include <iostream>

using namespace std;

int main() {
  int d, n, contador;
  cin >> d >> n;

  contador = 0;
  while (n > 0) {
    int digito = n % 10;
    if (digito == d) {
      contador++;
    }
    n = n / 10;
  }

  if (contador == 0) {
    cout << "NENHUM\n";
  } else {
    cout << contador << '\n';
  }

  return 0;
}