#include <iostream>

using namespace std;

int main() {
    int obstaculo, bateria, recarregadorProximo, temperaturaMotor;

    cin >> obstaculo >> bateria >> recarregadorProximo >> temperaturaMotor;

    if (obstaculo) {
        cout << "O robô deve parar imediatamente.\n";
    } else {
        if (bateria < 20) {
            if (temperaturaMotor > 90) {
                cout << "Alerta! O robô deve desligar imediatamente para evitar danos.\n";
            } else if (recarregadorProximo) {
                cout << "O robô deve ir recarregar.\n";
            } else {
                cout << "O robô deve entrar em modo de economia de energia.\n";
            }
        } else {
            if (temperaturaMotor > 90) {
                cout << "O robô deve parar para resfriamento.\n";
            } else if (bateria == 100) {
                cout << "O robô pode acelerar.\n";
            } else if (bateria >= 20 && bateria <= 80) {
                cout << "O robô pode continuar normalmente.\n";
            } else {
                cout << "Condição desconhecida. O robô manterá o estado atual.\n";
            }
        }
    }

    return 0;
}