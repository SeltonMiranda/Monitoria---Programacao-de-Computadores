#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double X;
    cin >> X;

    double fn = 0.0, fn_ant = 0.0;
    int iteracao = 1;

    while (iteracao <= 15 && abs(fn - fn_ant) >= 0.1) {
        double numerador;
        if (iteracao % 2 == 1) {
            numerador = 5 + (iteracao - 1);
        } else {
            numerador = 6 + (iteracao - 1);
        }

        double fatorial = 1;
        for (int i = 1; i <= iteracao; i++) {
            fatorial *= i;
        }

        double denominador = sqrt(fatorial);
        double termo = (numerador * X) / denominador;
        fn += termo;
        fn_ant = fn;

        iteracao++;
    }

    if (iteracao < 15) {
        cout << fn << endl;
    } else {
        cout << "MAXIMO ATINGIDO" << endl;
    }

    return 0;
}
