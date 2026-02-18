#include <iostream>
using namespace std;

#define TAMANHO_MAXIMO 10

int posicaoNoVetor(int num, int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vetor[TAMANHO_MAXIMO];
    int num, n;

    n = 0;
    cin >> num;
    while (num != 0) {
        vetor[n] = num;
        cin >> num;
        n++;
    }

    cin >> num;
    while (num != 0) {
        cout << posicaoNoVetor(num, vetor, n) << "\n";
    }

    return 0;
}