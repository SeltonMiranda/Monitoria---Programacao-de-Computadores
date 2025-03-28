// O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
// distribuidor e dos impostos (aplicados ao custo de fábrica).
// Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
// faça um programa Pascal que leia um número inteiro representando o custo de 
// fábrica de um carro e imprima o custo ao consumidor.

#include <iostream>

using namespace std;

int main() {
  int custoFabrica, custoConsumidor;
  cin >> custoFabrica;

  custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
  cout << custoConsumidor << '\n';

  return 0;
}
