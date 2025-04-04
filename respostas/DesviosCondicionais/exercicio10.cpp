// Alguém deseja cobrir as paredes de uma cozinha com azulejos.
// As lojas somente vendem caixas com 10 azulejos. Todas as lojas do ramo vendem apenas 3 (três) tipos de azulejos,
// cujas dimensões são:
// 
//     1.50cm x 40cm;
//     2.50cm x 60cm;
//     3.50cm x 80cm.
// 
// Faça um programa que leia do teclado dois valores inteiros representando respectivamente o tipo do azulejo desejado
// (um dos números 1, 2 ou 3) e a área que se deseja azulejar, em metros quadrados.
// Seu programa deve imprimir a quantidade de caixas de azulejos que deverão ser compradas para cobrir toda a área. 
// Considere que pedaços de azulejo podem ser reaproveitados, de maneira a minimizar a quantidade de caixas.

#include <iostream>

using namespace std;

int main() { 
  int tipo, area, caixas, areaTotalCaixa;
  cin >> tipo >> area;

  if (tipo == 1) {
    areaTotalCaixa = ((0.5 * 0.4) * 10);
  } else if (tipo == 2) {
    areaTotalCaixa = ((0.5 * 0.6) * 10);
  } else if (tipo == 3) {
    areaTotalCaixa = ((0.5 * 0.8) * 10);
  }

  caixas = area / areaTotalCaixa;
  if (area % areaTotalCaixa != 0) {
    caixas++;
  }

  cout << caixas << '\n';
  return 0;
}