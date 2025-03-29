/*
 * Uma agência governamental deseja conhecer a distribuição de renda de sua população. Para isso, coletou dados
 * de salários vários cidadãos. Considere o salário mínimo sendo 450 unidades monetárias.
 * 
 * 
 * As faixas salarias de interesse são:
 * 1. de 0 a 3 salários mínimos
 * 2. de 4 a 9 salários mínimos
 * 3. de 10 a 20 salários mínimos
 * 4. acima de 20 salários mínimos
 * 
 * Faça um programa que leia uma sequência de números reais, terminada em zero, que representam os salários dos cidadãos.
 * O programa deverá imprimir os percentuais da população para cada faixa salarial, em ordem.
 * A entrada zero não deve ser processada.
 */

#include <iostream>

using namespace std;

int main() {
    const double salarioMinimo = 450.0;
    double salario;
    double faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;
    int numCidadaos = 0;

    cin >> salario;
    while (salario != 0) {
        numCidadaos++;

        if (salario <= 3 * salarioMinimo) {
            faixa1++;
        } else if (salario < 10 * salarioMinimo) { 
            faixa2++;
        } else if (salario <= 20 * salarioMinimo) { 
            faixa3++;
        } else {
            faixa4++;
        }

        cin >> salario;
    }

    if (numCidadaos == 0) {
        cout << "0\n0\n0\n0\n";
    } else {
        cout << (faixa1 / numCidadaos) * 100 << '\n'; 
        cout << (faixa2 / numCidadaos) * 100 << '\n';
        cout << (faixa3 / numCidadaos) * 100 << '\n';
        cout << (faixa4 / numCidadaos) * 100 << '\n';
    }

    return 0;
}
