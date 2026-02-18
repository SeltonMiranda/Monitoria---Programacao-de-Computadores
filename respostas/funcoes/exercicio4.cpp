#include <iostream>
using namespace std;

float aumentoPercentual(int valorAntigo, int valorAtual) {
    float percentual = 1 - valorAtual / valorAntigo;
    return percentual;
}

int main() {

    int valorAntigo, valorAtual;
    cin >> valorAntigo >> valorAtual;
    while (valorAntigo != 0 || valorAtual != 0) {
        cout << aumentoPercentual(valorAntigo, valorAtual);
        cin >> valorAntigo >> valorAtual;
    }

    return 0;
}