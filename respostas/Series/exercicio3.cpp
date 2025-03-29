#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double soma = 0.0;
    int numerador = 2;

    for (int i = 1; i <= N; i++) {
        double denominador = 3 * i;
        double termo = (double)numerador / denominador;

        if (i % 2 == 0) {
            soma -= termo;
        } else {
            soma += termo;
        }

        numerador *= 2;
    }

    cout << soma << endl;

    return 0;
}