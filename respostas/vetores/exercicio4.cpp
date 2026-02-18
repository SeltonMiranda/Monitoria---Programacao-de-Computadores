#include <iostream>
using namespace std;

#define TAMANHO_MAXIMO 200

void insere(int num, float vetor[], int* tamanho) {
    if (*tamanho == 200) {
        cout << "erro\n";
        return;
    }

    if (*tamanho == 0) {
        vetor[0] = num;
        (*tamanho)++;
    }

    for (int i = 0; i < *tamanho; i++) {
        if (vetor[i] > *tamanho) {
            for (int j = i; j < *tamanho - 1; j++) {
                vetor[j+1] = vetor[j];
            }
            vetor[i] = num;
            (*tamanho)++;
        }
    }
}

void remove(int num, float vetor[], int* tamanho) {
    for (int i = 0; i < *tamanho; i++) {
        if (num == vetor[i]) {
            for (int j = i; j < *tamanho - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            (*tamanho)--;
            return;
        }
    }
    cout << "erro\n";
}

void imprimirVetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";
}

int main() {
    int operacao;
    int tamanho;
    float vetor[TAMANHO_MAXIMO];
    float num;

    cin >> operacao;
    while (operacao != 0) {
        cin >> num;
        if (operacao == 1) {
            insere(num, vetor, &tamanho);
        } else if (operacao == 2) {
            remove(num, vetor, &tamanho);
        }
        cin >> operacao;
    }
    return 0;
}