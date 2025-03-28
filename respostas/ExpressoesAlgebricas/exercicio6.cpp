// leia 3 numeros inteiros os quais são as notas do aluno (p1, p2, p3) e imprima a media ponderada
// sendo um inteiro também
// Com peso de cada nota sendo 1, 2 e 3 respectivamente.

#include <iostream>

using namespace std;

int main() {
  int p1, p2, p3;
  int media;

  cin >> p1 >> p2 >> p3;

  media = (p1 * 1 + p2 * 2 + p3 * 3) / (1 + 2 + 3);
  cout << media << '\n';


  return 0;
}
