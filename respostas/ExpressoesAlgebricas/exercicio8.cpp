/*
 * Dado um horario no formato horas e minutos (dois inteiros), faça um programa que calcule quantos minutos faltam para
 * meia-noite
 * 
 * Exemplo
 * Entrada: 22 30
 * Saida: 90 minutos
 */


#include <iostream>

using namespace std;

int main() {
  int horas, minutos, minutosRestantes;
  cin >> horas >> minutos;  

  minutosRestantes = (24 * 60) - (horas * 60) - minutos; 
  cout << minutosRestantes << " minutos\n";

  return 0;
}
