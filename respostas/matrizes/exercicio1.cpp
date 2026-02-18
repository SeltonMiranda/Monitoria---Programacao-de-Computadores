#include <iostream>
using namespace std;

#define TAMANHO_MAXIMO 100

void lerMatriz(int matriz[][TAMANHO_MAXIMO], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }
}

int contarLinhasNulas(int matriz[][TAMANHO_MAXIMO], int linhas, int colunas) {
    int linhasNulas = 0;
    bool linhaEhNula = true;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] != 0) {
                linhaEhNula = false;
            }
        }
        
        if (linhaEhNula) {
            linhasNulas++;
        }
    }
    return linhasNulas;
}

int contarColunasNulas(int matriz[][TAMANHO_MAXIMO], int linhas, int colunas) {
    int colunasNulas = 0;
    bool colunaEhNula = true;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[j][i] != 0) {
                colunaEhNula = false;
            }
        }

        if (colunaEhNula) {
            colunasNulas++;
        }
    }
    return colunasNulas;
}

int main() {
    int n, m;
    int matriz[TAMANHO_MAXIMO][TAMANHO_MAXIMO];

    cin >> n >> m;
    lerMatriz(matriz, n, m);

    cout << "linhas: " << contarLinhasNulas(matriz, n, m) << "\n";
    cout << "colunas: " << contarColunasNulas(matriz, n, m) << "\n";
    return 0;
}