#include <iostream>

using namespace std;

#define MAX 100

bool verificarLinhas(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        int contaUm = 0;
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 1) {
                contaUm++;
            } else if (matriz[i][j] != 0) {
                return false; 
            }
        }
        if (contaUm != 1) return false;
    }
    return true;
}

bool verificarColunas(int matriz[MAX][MAX], int n) {
    for (int j = 0; j < n; j++) {
        int contaUm = 0;
        for (int i = 0; i < n; i++) {
            if (matriz[i][j] == 1) {
                contaUm++;
            }
        }
        if (contaUm != 1) return false; 
    }
    return true;
}

void lerMatriz(int matriz[][MAX], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cin >> matriz[i][j];
        }
    }
}

int main() {
    int n;
    int matriz[MAX][MAX];

    cin >> n;
    lerMatriz(matriz, n);

    if (verificarLinhas(matriz, n) && verificarColunas(matriz, n)) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}