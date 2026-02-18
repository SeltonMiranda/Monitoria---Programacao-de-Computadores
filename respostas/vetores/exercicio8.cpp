#include <iostream>
#include <vector>
//muito dificil

using namespace std;

void ler_vetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int tem_subsequencias_iguais(int v[], int n, int tam_seg) {
    for (int i = 0; i <= n - 2 * tam_seg; i++) {
        for (int j = i + 1; j <= n - tam_seg; j++) {
            bool iguais = true;
            
            for (int k = 0; k < tam_seg; k++) {
                if (v[i + k] != v[j + k]) {
                    iguais = false;
                    break;
                }
            }
            
            if (iguais) {
                return i;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    int v[100];

    cin >> n;
    ler_vetor(v, n);

    int pos = 0;
    int tamanho_subsequencia = n / 2;

    while (pos == 0 && tamanho_subsequencia >= 2) {
        pos = tem_subsequencias_iguais(v, n, tamanho_subsequencia);
        if (pos == 0) {
            tamanho_subsequencia--;
        }
    }

    if (pos > 0) {
        cout << pos << " " << tamanho_subsequencia << endl;
    } else {
        cout << "nenhuma" << endl;
    }

    return 0;
}