#include <iostream>
using namespace std;

bool ehOrdemCrescente(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false; 
        }
    }
    return true;
}

void imprimirOrdemInversa(int vetor[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "vetor vazio\n";
        return 0;
    }

    int vetor[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    if (ehOrdemCrescente(vetor, n)) {
        cout << "sim";
    } else {
        cout << "nao";
    }

    imprimirOrdemInversa(vetor, n);

    return 0;
}