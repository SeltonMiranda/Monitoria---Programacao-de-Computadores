// Faça um programa que leia um numero do teclado e imprima "SIM" se o numero é ímpar, negativo e menor que -20 
// ou se for par, positivo e maior que 7, caso contrário imprima "NAO"

#include <iostream>

using namespace std;

int main() {
  int numero;
  cin >> numero;
  if (((numero % 2 != 0) && numero < 0 && numero < -20) || ((numero % 2 == 0) && numero > 0 && numero > 7)) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }


  return 0;
}