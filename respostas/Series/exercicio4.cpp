#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double soma = 0.0;
    int numerador = 1, denominador = 2;

    for (int i = 1; i <= N; i++) {
        soma += (double)numerador / denominador;
        int temp = numerador;
        numerador = denominador + 1;
        denominador = temp + 1;
    }

    cout << soma << endl;

    return 0;
}