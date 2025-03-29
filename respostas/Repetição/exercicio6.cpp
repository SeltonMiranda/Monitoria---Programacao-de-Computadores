/*
 *  Faça um programa que leia dois números por linha, sendo, respectivamente, a nota e o peso. A nota deve ser um valor real
 * e o peso um valor inteiro. A leitura termina quando os dois números lidos forem zero. Essa linha não deve ser considerada.
 * 
 */

#include <iostream>

using namespace std;

int main() {
  int peso;
  float nota;
  float media, numerador, denominador;
  numerador = 0;
  denominador = 0;

  cin >> nota >> peso;
  while (nota != 0 && peso != 0) {
    numerador += nota * peso; 
    denominador += peso;
    cin >> nota >> peso;
  }

  media = numerador / denominador;

  cout << media << "\n";

  return 0;
}
