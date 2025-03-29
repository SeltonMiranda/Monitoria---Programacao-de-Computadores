#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double soma = 0.0;

    for (int i = 1; i < N; i++) {
        soma += (double)i / (N - i);
    }

    cout << soma << endl;

    return 0;
}