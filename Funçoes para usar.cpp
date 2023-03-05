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

bool leap_year(int y) {
    bool resultado = false;
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        resultado = true;
        return resultado;
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

int adigits(int a, int b, int c) {  //mal otimizado
    int resultado = 0;
    if (a >= b && a >= c) {
        resultado = 100 * a;
        if (b >= c) {
            resultado += 10 * b + c;
            return resultado;
        }
        else {
            resultado += 10 * c + b;
            return resultado;
        }
    }
    if (c >= b && c >= a) {
        resultado = 100 * c;
        if (b >= a) {
            resultado += 10 * b + a;
            return resultado;
        }
        else {
            resultado += 10 * a + b;
            return resultado;
        }
    }
    if (b >= c && b >= a) {
        resultado = 100 * b;
        if (c >= a) {
            resultado += 10 * c + a;
            return resultado;
        }
        else {
            resultado += 10 * a + c;
            return resultado;
        }
    }
    return 0;
}

int dias_do_mes (int mes, int ano) {
    int dias;
    switch (mes) {
        case 2:
            dias = leap_year(ano) ? 29 : 28; //Fevereiro
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        default:
            dias = 30;
            break;
    }
    return dias;
}

long algoritmo_de_euclides (int a, int b) { //algoritmo para calcular o maximo divisor comum
    long resultado;
    if (b == 0) {
        resultado = a;
        return resultado;
    }
    else {
        resultado = algoritmo_de_euclides(b, a % b);
        return resultado;
    }
}
int main() {
    return 0;
}