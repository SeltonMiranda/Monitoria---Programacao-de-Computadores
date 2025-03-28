// Faça um programa que leia 3 valores inteiros representado a data de nascimento de uma pessoa
// (dia/mês/ano), e imprima quantos anos ela terá em 21/04/2025.

#include <iostream>

using namespace std;

int main() {
  int dia, mes, ano;
  int idade;
  cin >> dia >> mes >> ano;

  idade = 2025 - ano;

  if (mes > 4 || (mes == 4 && dia > 21)) {
    idade--;
  }

  cout << idade << '\n';

  return 0;
}