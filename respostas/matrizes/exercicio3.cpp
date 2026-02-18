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

bool ehTriangularSuperior(int matriz[MAX][MAX], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matriz[i][j] != 0) {
                return false; 
            }
        }
    }
    return true;
}

bool ehTriangularInferior(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matriz[i][j] != 0) {
                return false; 
            }
        }
    }
    return true;
}

bool verificarTriangular(int matriz[MAX][MAX], int n) {
    return ehTriangularSuperior(matriz, n) || ehTriangularInferior(matriz, n);
}

int main() {
    int n;
    int matriz[MAX][MAX];

    cin >> n;

    lerMatriz(matriz, n);

    if (verificarTriangular(matriz, n)) {
        cout << "sim\n";
    } else {
        cout << "nao\n";
    }

    return 0;
}