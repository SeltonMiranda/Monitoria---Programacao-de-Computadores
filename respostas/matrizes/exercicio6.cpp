#include <iostream>

using namespace std;

#define MAX 100

void lerMatriz(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

bool ehQuadradoMagico(int matriz[MAX][MAX], int n) {
    // 1. Definir a soma de referência (usando a primeira linha)
    int somaReferencia = 0;
    for (int j = 0; j < n; j++) {
        somaReferencia += matriz[0][j];
    }

    // 2. Verificar as outras linhas (começando da segunda)
    for (int i = 1; i < n; i++) {
        int somaLinha = 0;
        for (int j = 0; j < n; j++) {
            somaLinha += matriz[i][j];
        }
        if (somaLinha != somaReferencia) return false; 
    }

    // 3. Verificar todas as colunas
    for (int j = 0; j < n; j++) {
        int somaColuna = 0;
        for (int i = 0; i < n; i++) {
            somaColuna += matriz[i][j];
        }
        if (somaColuna != somaReferencia) return false;
    }

    // 4. Verificar Diagonal Principal
    int somaPrincipal = 0;
    for (int i = 0; i < n; i++) {
        somaPrincipal += matriz[i][i];
    }
    if (somaPrincipal != somaReferencia) return false;

    // 5. Verificar Diagonal Secundária
    int somaSecundaria = 0;
    for (int i = 0; i < n; i++) {
        somaSecundaria += matriz[i][n - 1 - i];
    }
    if (somaSecundaria != somaReferencia) return false;

    return true;
}

int main() {
    int n;
    int A[MAX][MAX];

    cin >> n;

    lerMatriz(A, n);
    if (ehQuadradoMagico(A, n)) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}