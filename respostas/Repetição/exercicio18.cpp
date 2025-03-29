/*
 * Se multiplicarmos 37 por alguns números, obteremos números cujos algarismos, quando somados, resultam no mesmo número
 * que foi multiplicado por 37. Por exemplo, tomamos 15, 15 x 37 = 555 -> 5 + 5 + 5 = 15.
 * 
 * Faça um programa que leia um número inteiro positivo, multiplique-o por 37, some os algarismos do resultado, compare
 * essa soma com o número lido e imprima "SIM" ser for igual ou "NAO" se for diferente.
 */

#include <iostream>

using namespace std;

int main() {
  int numero, resultado, soma, digito;
  cin >> numero;

  resultado = numero * 37;
  soma = 0;

  while (resultado > 0) {
    digito = resultado % 10;
    soma += digito;
    resultado = resultado / 10;
  }

  if (soma == numero) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }




  return 0;
}