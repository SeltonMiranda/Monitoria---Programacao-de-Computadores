#include <iostream>
// muito dificil

using namespace std;

#define MAX_L 100
#define MAX_C 100

void lerMatriz(int matriz[MAX_L][MAX_C], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }
}

/**
 * Verifica se o quadrado na posição (i, j) inicia uma palavra horizontal.
 * Uma palavra horizontal precisa de pelo menos 2 espaços (0).
 */
bool iniciaHorizontal(int A[MAX_L][MAX_C], int n, int m, int i, int j) {
    if (A[i][j] == -1) return false;
    
    // Precisa ter um espaço em branco à direita
    bool temEspacoDireita = (j + 1 < m && A[i][j + 1] == 0);
    // Precisa ser a borda esquerda ou ter um quadrado preto à esquerda
    bool bordaOuPretoEsquerda = (j == 0 || A[i][j - 1] == -1);
    
    return temEspacoDireita && bordaOuPretoEsquerda;
}

/**
 * Verifica se o quadrado na posição (i, j) inicia uma palavra vertical.
 * Uma palavra vertical precisa de pelo menos 2 espaços (0).
 */
bool iniciaVertical(int A[MAX_L][MAX_C], int n, int m, int i, int j) {
    if (A[i][j] == -1) return false;
    
    // Precisa ter um espaço em branco abaixo
    bool temEspacoBaixo = (i + 1 < n && A[i + 1][j] == 0);
    // Precisa ser a borda superior ou ter um quadrado preto acima
    bool bordaOuPretoAcima = (i == 0 || A[i - 1][j] == -1);
    
    return temEspacoBaixo && bordaOuPretoAcima;
}

/**
 * Processa a matriz e atribui a numeração sequencial.
 */
void numerarCruzada(int A[MAX_L][MAX_C], int n, int m) {
    int contador = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Se o quadrado inicia qualquer tipo de palavra, recebe o número atual
            if (iniciaHorizontal(A, n, m, i, j) || iniciaVertical(A, n, m, i, j)) {
                A[i][j] = contador;
                contador++;
            }
        }
    }
}

void imprimirMatriz(int A[MAX_L][MAX_C], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << (j == m - 1 ? "" : " ");
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    int A[MAX_L][MAX_C];

    cin >> n >> m;

    lerMatriz(A, n, m);
    numerarCruzada(A, n, m);
    imprimirMatriz(A, n, m);

    return 0;
}