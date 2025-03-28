// A prefeitura de Piraporinha abriu uma linha de crédito para os funcionários estatutários. O valor máximo 
// da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa que leia do teclado dois números inteiros
// que representam o salário bruto e o valor da prestação e informe se o empréstimo pode ou não ser concedido.

#include <iostream>

using namespace std;

int main() {
  int salarioBruto, valorPrestacao;
  cin >> salarioBruto >> valorPrestacao;

  if (valorPrestacao < 0.3 * salarioBruto) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }

  return 0;
}