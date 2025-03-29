#include <iostream>

using namespace std;

int main() {
    int N;
    double X;
    cin >> N >> X;

    double soma = 0.0;
    int sinal = 1;
    int expoente = 0;
    double xPotencia = 1.0;

    for (int i = 1; i <= N; i++) {
        double fatorial = 1;
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }

        soma += sinal * (xPotencia / fatorial);
        xPotencia *= X * X * X * X;
        sinal = -sinal;
    }

    cout << soma << endl;

    return 0;
}