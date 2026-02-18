#include <iostream>
using namespace std;

// Verifica se o numero ja existe no vetor compactado
void adicionar(int num, int compactado[], int& tamanhoCompactado) {
    for (int i = 0; i < tamanhoCompactado; i++) {
        if (num == compactado[i]) {
            return; // Se ja existe, nao faz nada
        }
    }
    // Se nao existia, adiciona na proxima posicao livre
    compactado[tamanhoCompactado] = num;
    tamanhoCompactado++;
}

void compactar(int original[], int n, int destino[], int& tamanhoDestino) {
    tamanhoDestino = 0; // Garantimos que comeca do zero
    for (int i = 0; i < n; i++) {
        adicionar(original[i], destino, tamanhoDestino);
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << (i == tamanho - 1 ? "" : " ");
    }
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        int vetor[n];
        int vetorCompactado[n]; 
        int m = 0;             

        for (int i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        compactar(vetor, n, vetorCompactado, m);

        cout << "O: ";
        imprimirVetor(vetor, n);
        cout << "\nC: ";
        imprimirVetor(vetorCompactado, m);
        cout << "\n";
    }
    return 0;
}