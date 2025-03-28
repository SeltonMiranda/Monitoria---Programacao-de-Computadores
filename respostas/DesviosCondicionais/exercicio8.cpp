/*
 * Faça um programa que leia um numero inteiro positivo i e três valores reais a, b e c. Imprima na tela da seguinte maneira
 * Os três valores a, b e c em ordem crescente se i = 1
 * Os três valores a, b e c em ordem decrescente se i = 2
 * Os três valores a, b e c de forma que o maior entre eles fique no meio e a ordem relativa dos restantes se mantenha, se i = 3
 * 
 * Exemplo
 * Entrada: 3 68 5 45 
 * Saída: 5 68 45
 */


#include <iostream>

using namespace std;

int main() {
    int i;
    float a, b, c, temp;
    
    cin >> i >> a >> b >> c;

    if (i == 1) { 
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
    } 
    else if (i == 2) { 
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
    } 
    else if (i == 3) { 
        if ((a > b && a < c) || (a < b && a > c)) {
            temp = b;
            b = a;
            a = temp;
        } 
        else if ((c > b && c < a) || (c < b && c > a)) {
            temp = b;
            b = c;
            c = temp;
        }
    }

    cout << a << " " << b << " " << c << '\n';
    
    return 0;
}