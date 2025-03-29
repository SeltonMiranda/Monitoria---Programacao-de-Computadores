/*
 * Faça um program que leia um número inteiro N e calcule o produto dos primeiros N números pares positivos. 
 * Ao final imprima esse produto.
 */

#include <iostream>

using namespace std;

int main() {
  int n, produto, contador, num;
  cin >> n;

  produto = 1;
  contador = 0;
  num = 1;
  while (contador < n) {
    if (num % 2 == 0) {
      produto *= num;
      contador++;
    }
    num++;
  }

  cout << produto << '\n';

  return 0;
}