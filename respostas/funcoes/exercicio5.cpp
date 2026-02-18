#include <iostream>
using namespace std;

float media_ponderada(int p1, int p2, int p3) {
    float media = (p1 * 1 + p2 * 2 + p3 * 3) / 6;
    return media;
}

bool aprovado(float media) {
    if (media >= 50.0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, p1, p2, p3;
    float media;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p1 >> p2 >> p3;
        media = media_ponderada(p1, p2, p3);
        if (aprovado(media)) {
            cout << "Aluno " << i + 1 << "aprovado com media: " << media << "\n";
        } else {
            cout << "Aluno " << i + 1 << "reprovado com media: " << media << "\n";
        }
    }
    return 0;
}