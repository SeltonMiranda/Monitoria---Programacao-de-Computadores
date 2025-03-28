/*
 * Faça um programa que leia 3 numeros reais que são as três notas obtidas por um aluno.
 * Leia, também, um valor inteiro que indique a quantidade de faltas desse aluno.
 * 
 * Caso a média aritmética seja inferior que 4.0, imprima "Reprovado"
 * Caso a média aritmética esteja entre 4.0 (inclusive) e 7.0, imprima "Final"
 * Caso a média aritmética seja maior ou igual a 7.0, imprima "Aprovado"
 * Se o número de faltas for igual ou maior que 10, o aluno está automaticamente reprovado, nesse caso imprima "Reprovado"
 * 
 */

#include <iostream>

using namespace std;

int main() {
  float nota1, nota2, nota3, media;
  int faltas;

  cin >> nota1 >> nota2 >> nota3 >> faltas;

  if (faltas >= 10) {
    cout << "Reprovado\n";
  } else {
    media = (nota1 + nota2 + nota3) / 3;
    if (media < 4.0) {
      cout << "Reprovado\n";
    } else if (4.0 <= media && media < 7.0) {
      cout << "Final\n";
    } else {
      cout << "Aprovado\n";
    }
  }

  return 0;
}