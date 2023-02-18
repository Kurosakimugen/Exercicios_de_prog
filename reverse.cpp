#include <iostream>
using namespace std;

int Numero_de_digitos (int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

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


int main() {
    int numero;
    cin >> numero;
    int resultado = 0;
    int digitos = Numero_de_digitos(numero);
    if(digitos == 1) {
        resultado = numero;
        return  resultado;
    }
    for (int i = digitos-1; i >= 0; i--) {
        int parcela = numero / potencia(10,i);
        int expoente_reverso = digitos-i-1;
        resultado += parcela * potencia(10,expoente_reverso);
        numero -= parcela * potencia(10,i);
    }
    cout << resultado;
    return 0;
}
