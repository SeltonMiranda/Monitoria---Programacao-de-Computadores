#include <iostream>
using namespace std;

bool contrario(int n, int m) {
    int invertido = 0;
    int original = n;

    while (original != 0) {
        int resto = original % 10;
        invertido = (invertido * 10) + resto;
        original = original / 10;
    }

    if (invertido == m) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    if (contrario(n, m)) {
        cout << n <<" eh o contrário de " << m << "\n";
    } else {
        cout << n <<" nao eh o contrário de " << m << "\n";
    }

    return 0;
}