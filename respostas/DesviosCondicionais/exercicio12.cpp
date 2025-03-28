// Faça um programa que informe se um numero lido do teclado é divisível por 10, por 5, por 2 ou por nenhum deles

#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;

  if (numero % 10 == 0) {
    cout << 10 << " " << 5 << " " << 2 << '\n';
  } else if (numero % 5 == 0) {
    cout << 5 << '\n';
  } else if (numero % 2 == 0) {
    cout << 2 << "\n";
  }

  return 0;
}