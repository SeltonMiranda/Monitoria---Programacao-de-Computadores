#include <iostream>

using namespace std;

int main() {
    double Pa, Pb, Ta, Tb;
    cin >> Pa >> Pb >> Ta >> Tb;

    int anos = 0;

    if (Pa < Pb && Ta > Tb) {
        while (Pa <= Pb) {
            Pa += Pa * (Ta / 100.0);
            Pb += Pb * (Tb / 100.0);
            anos++;
        }
        cout << anos << endl;
    } 
    else if (Pb < Pa && Tb > Ta) {
        while (Pb <= Pa) {
            Pa += Pa * (Ta / 100.0);
            Pb += Pb * (Tb / 100.0);
            anos++;
        }
        cout << anos << endl;
    } 
    else {
        cout << 0 << endl;
    }

    return 0;
}