#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double soma = 0.0;
    double numerador = 1, denominador = 1; 

    for (int i = 0; i < N; i++) {
        soma +=  numerador / denominador; 
        double proximoNumero = numerador + denominador; 
        numerador = denominador;
        denominador = proximoNumero;
    }

    cout << soma << endl;

    return 0;
}