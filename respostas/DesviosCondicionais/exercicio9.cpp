/*
 * Faça um program que leia dois números inteiros sendo, respectivamente, o número de lados de um polígono regular
 * e a medida do lado. 
 * 
 * Se o número de lados for 3, imprima "TRIANGULO" e o valor do seu perímetro,
 * Se o número de lados for 4, imprima "QUADRADO" e o valor da sua area
 * Se o número de lados for 5, imprima "PENTAGONO"
 * Se o número for menor que 3, imprima "ERRO"
 * Se o número for maior que 5, imprima "ERRO"
 */

#include <iostream>

using namespace std;

int main() {
  int lados, tamanho;
  cin >> lados >> tamanho;

  if (lados == 3) {
    cout << "TRIANGULO " << 3 * tamanho << '\n';
  } else if (lados == 4) {
    cout << "Quadrado " << tamanho * tamanho << '\n';
  } else if (lados == 5) {
    cout << "PENTAGONO\n";
  } else {
    cout << "ERRO\n";
  }
  return 0;
}