#include <iostream>
using namespace std;

void lerVetor(float vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }
}

float somaPositivosPares(float v[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0 && i % 2 == 0) {
            sum += v[i];
        }
    }
    return sum;
}

float somaNegativosImpares(float v[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0 && i % 2 != 0) {
            sum += v[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "vetor vazio\n";
        return 0;
    }

    float vetor[n];
    lerVetor(vetor, n);
    float soma1 = somaPositivosPares(vetor, n);
    float soma2 = somaNegativosImpares(vetor, n);

    if (soma2 == 0) {
        cout << "divisao por zero\n";
    } else {
        cout << soma1 / soma2 << "\n";
    }


    
    return 0;
}