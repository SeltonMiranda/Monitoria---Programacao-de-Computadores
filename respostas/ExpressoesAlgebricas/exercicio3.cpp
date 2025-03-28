#include <iostream>

using namespace std;

int main() {
  float diametro, raio, pi, volumeEsfera;

  cin >> diametro;

  pi = 3.14;
  raio = diametro / 2;
  volumeEsfera = (4 * pi * raio * raio * raio) / 3;
  cout << volumeEsfera << '\n';

  return 0;
}