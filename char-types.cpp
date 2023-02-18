#include <iostream>
using namespace std;

int main() {
	int quantidade;
    cin >> quantidade;
    int contador_de_numero = 0;
    int contador_de_letras = 0;
    int contador_do_resto = 0;
    char termo;
    for (int i = 0; i < quantidade; i++) {
        cin >> termo;
        if (termo <= '9' && termo >= '0') {
            contador_de_numero++;
            continue;
        }
        if (termo >= 'a' && termo <= 'z') {
            contador_de_letras++;
            continue;
        }
        if(termo >= 'A' && termo <= 'Z') {
            contador_de_letras++;
            continue;
        }
        contador_do_resto++;
    }
    cout << contador_de_letras << ' ' << contador_de_numero << ' ' << contador_do_resto;
    return 0;
}
