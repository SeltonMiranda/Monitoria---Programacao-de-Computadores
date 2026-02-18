#include <iostream>
using namespace std;

void lerVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

bool jaApareceuAntes(int v[], int pos) {
    for (int i = 0; i < pos; i++) {
        if (v[i] == v[pos]) {
            return true;
        }
    }
    return false;
}

int contarFrequencia(int v[], int n, int valor) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            cont++;
        }
    }
    return cont;
}

int calcularTotalDistintos(int v[], int n) {
    int distintos = 0;
    for (int i = 0; i < n; i++) {
        if (!jaApareceuAntes(v, i)) {
            distintos++;
        }
    }
    return distintos;
}

void imprimirRelatorio(int v[], int n) {
    for (int i = 0; i < n; i++) {
        // So processamos e imprimimos se for a primeira vez que vemos o numero
        if (!jaApareceuAntes(v, i)) {
            int freq = contarFrequencia(v, n, v[i]);
            cout << v[i] << " ocorre " << freq << " vezes" << endl;
        }
    }
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    int vetor[n];
    
    lerVetor(vetor, n);

    int total = calcularTotalDistintos(vetor, n);
    cout << "A sequencia tem " << total << " numeros distintos." << endl;

    imprimirRelatorio(vetor, n);

    return 0;
}