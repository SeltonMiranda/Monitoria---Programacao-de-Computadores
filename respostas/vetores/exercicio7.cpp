#include <iostream>
using namespace std;

void lerEntrada(int v1[], int tamanho, int v2[], int tamanho2) {
    for (int i = 0; i < tamanho; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < tamanho2; i++) {
        cin >> v2[i];
    }
}

int contarOcorrencias(int v1[], int tamanho, int v2[], int tamanho2) {
    int count = 0;
    for (int i = 0; i <= tamanho - tamanho2; i++) {
        bool ocorre = true;
        for (int j = 0; j < tamanho2; j++) {
            if (v1[i + j] != v2[j]) {
                ocorre = false;
            }
        }
        if (ocorre) {
            count++;
        }
    }
    return count;
}

#define TAMANHO_MAXIMO 100

int main() {
    int n, m;
    int vetor1[TAMANHO_MAXIMO], vetor2[TAMANHO_MAXIMO];
    cin >> n >> m;

    lerEntrada(vetor1, n, vetor2, m);

    int ocorrencias = contarOcorrencias(vetor1, n, vetor2, m);
    cout << ocorrencias << "\n";

    return 0;
}