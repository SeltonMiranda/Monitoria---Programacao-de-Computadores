/*
 * Faça um programa que informe qual dia da semana será daqui x dias lido do teclado. Considere que hoje é sábado.
 * Imprima o dia da semana.
 */

#include <iostream>

using namespace std;

int main() {
  int x, diaDaSemana;
  cin >> x; 

  diaDaSemana = x % 7;

  if (diaDaSemana == 0) {
    cout << "SABADO\n";
  } else if (diaDaSemana == 1) {
    cout << "DOMINGO\n";
  } else if (diaDaSemana == 2) {
    cout << "SEGUNDA-FEIRA";
  } else if (diaDaSemana == 3) {
    cout << "TERCA-FEIRA";
  } else if (diaDaSemana == 4) {
    cout << "QUARTA-FEIRA";
  } else if (diaDaSemana == 5) {
    cout << "QUINTA-FEIRA";
  } else if (diaDaSemana == 6) {
    cout << "SEXTA-FEIRA";
  }

  return 0;
}