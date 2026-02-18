#include <iostream>
#include <cmath> // Para a função fabs()

using namespace std;

#define MAX_LINHAS 100
#define MAX_COLUNAS 100
#define EPSILON 0.0001 // margem de erre

void lerDados(double A[MAX_LINHAS][MAX_COLUNAS], double X[MAX_COLUNAS], double B[MAX_LINHAS], int m, int n) {
    for (int j = 0; j < n; j++) {
        cin >> X[j];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
}

bool verificarSistema(double A[MAX_LINHAS][MAX_COLUNAS], double X[MAX_COLUNAS], double B[MAX_LINHAS], int m, int n) {
    for (int i = 0; i < m; i++) {
        double somaAcumulada = 0.0;

        for (int j = 0; j < n; j++) {
            somaAcumulada += A[i][j] * X[j];
        }

        if (fabs(somaAcumulada - B[i]) > EPSILON) {
            return false; 
        }
    }
    return true;
}

int main() {
    int m, n;
    
    double A[MAX_LINHAS][MAX_COLUNAS];
    double X[MAX_COLUNAS];
    double B[MAX_LINHAS];

    cin >> m >> n;

    lerDados(A, X, B, m, n);

    if (verificarSistema(A, X, B, m, n)) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}