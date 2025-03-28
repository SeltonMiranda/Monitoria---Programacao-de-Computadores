/*
 * Dado um valor real em graus Celsius, faça um programa que converta esse valor para Fahrenheit.
 */


#include <iostream>

using namespace std;

int main() {
  float grausCelsius, grausFahrenheit;
  cin >> grausCelsius;

  grausFahrenheit = ((9 * grausCelsius) / 5) + 32;
  cout << grausFahrenheit << '\n';
  return 0;
}