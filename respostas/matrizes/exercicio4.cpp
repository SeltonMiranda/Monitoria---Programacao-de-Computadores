#include <iostream>
using namespace std;

#define MAX 100

void lerMatriz(int matriz[][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }
}

bool procuraRepetido(int elemento, int matriz[][MAX], int linha, int coluna, int linhas, int colunas) {
    for (int i = linha; i < linhas; i++) {
        for (int j = coluna; j < colunas; j++) {
            if (matriz[i][j] == elemento) {
                return true;
            }
        }
    }
    return false;
}

bool temElementoRepetido(int matriz[][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            bool temRepeticao = procuraRepetido(matriz[i][j], matriz, i, j + 1, linhas, colunas);
            if (temRepeticao) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, m;
    int matriz[MAX][MAX];

    cin >> n >> m;
    lerMatriz(matriz, n, m);
    if (temElementoRepetido(matriz, n, m)) {
        cout << "Sim\n";
    } else {
        cout << "Nao\n";
    }
    return 0;
}