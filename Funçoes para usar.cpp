#include <iostream>
using namespace std;

int potencia(int numero,int expoente) {
    int resultado = 1;
    if (expoente == 0) {
        return resultado;
    }
    if (expoente == 1) {
        return numero;
    }
    for(int i = 1; i <= expoente; i++) {
        resultado = resultado * numero;
    }
    return resultado;
}

bool primo(int numero) {
    bool resultado = true;
    if (numero == 1) {
        resultado = false;
        return resultado;
    }
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

bool pernicious(int numero) { //requer o primo e potencia
    int contador_de_1 = 0;
    int maior_expoente;
    while (numero != 0) {
        int expoente = 0;
        while (true) {
            maior_expoente = potencia(2,expoente);
            if(maior_expoente > numero) {
                expoente--;
                maior_expoente = potencia(2,expoente);
                break;
            }
            expoente++;
        }
        contador_de_1++;
        numero -= maior_expoente;
    }
    return (primo(contador_de_1));
}

int Numero_de_digitos (int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++
    }
    return contador;
}

int main() {
    return 0;
}