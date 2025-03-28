/*
 * Faça um programa que troque o conteúdo de duas variáveis
 * Exemplo
 * entrada: 2 5
 * saida: 5 2
 */ 


#include <iostream>

using namespace std;

int main() {
  int a, b, temp;
  cin >> a >> b;

  temp = a;
  a = b;
  b = temp;

  cout << a << " " << b << '\n';

  return 0;
}