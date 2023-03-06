#include <iostream>
using namespace std;

bool primo(int numero) {
    bool resultado = true;
    for (int i = 1; i < numero; i++) {
        if (i == 1) {
            continue;
        }
        if (numero % i == 0) {
            resultado = false;
        }
    }
    return resultado;
}

int main() {
    int limite_do_for;
    cin >> limite_do_for;
    if (limite_do_for == 1) {
        return 0;
    }
    for (int i = 2;i <= limite_do_for; i++) {
        if (primo(i)) {
            cout << i << ' ';
        }
        continue;
    }
    return 0;
}