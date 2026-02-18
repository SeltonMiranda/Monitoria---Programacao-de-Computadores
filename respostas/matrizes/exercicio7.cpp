#include <iostream>

using namespace std;

#define MAX 100

bool ehSubQuadradoMagico(int matriz[MAX][MAX], int iniLinha, int iniColuna, int k) {
    // 1. Soma de referência (primeira linha da submatriz)
    int somaRef = 0;
    for (int j = 0; j < k; j++) {
        somaRef += matriz[iniLinha][iniColuna + j];
    }

    // 2. Verificar outras linhas
    for (int i = 1; i < k; i++) {
        int somaLinha = 0;
        for (int j = 0; j < k; j++) {
            somaLinha += matriz[iniLinha + i][iniColuna + j];
        }
        if (somaLinha != somaRef) return false;
    }

    // 3. Verificar colunas
    for (int j = 0; j < k; j++) {
        int somaCol = 0;
        for (int i = 0; i < k; i++) {
            somaCol += matriz[iniLinha + i][iniColuna + j];
        }
        if (somaCol != somaRef) return false;
    }

    // 4. Diagonal Principal da submatriz
    int somaPri = 0;
    for (int i = 0; i < k; i++) {
        somaPri += matriz[iniLinha + i][iniColuna + i];
    }
    if (somaPri != somaRef) return false;

    // 5. Diagonal Secundária da submatriz
    int somaSec = 0;
    for (int i = 0; i < k; i++) {
        somaSec += matriz[iniLinha + i][iniColuna + k - 1 - i];
    }
    if (somaSec != somaRef) return false;

    return true;
}

void lerMatriz(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

int contaQuadradosMagicos(int matriz[MAX][MAX], int n) {
    int contador = 0;
    // Testar todos os tamanhos k possíveis para a submatriz (de 2 até n)
    for (int k = 2; k <= n; k++) {
        // Percorrer todas as posições iniciais possíveis para uma submatriz k x k
        for (int r = 0; r <= n - k; r++) {
            for (int c = 0; c <= n - k; c++) {
                if (ehSubQuadradoMagico(matriz, r, c, k)) {
                    contador++;
                }
            }
        }
    }
    return contador;
}

int main() {
    int n;
    int matriz[MAX][MAX];

    cin >> n;
    lerMatriz(matriz, n);

    cout << contaQuadradosMagicos(matriz, n) << endl;

    return 0;
}