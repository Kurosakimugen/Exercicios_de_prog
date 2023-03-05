#include "fraction.h"
#include <iostream>

using namespace std;

int algoritmo_de_euclides (int a, int b) { //algoritmo para calcular o maximo divisor comum
    int resultado;
    if (b == 0) {
        resultado = a;
        return resultado;
    }
    else {
        resultado = algoritmo_de_euclides(b, a % b);
        return resultado;
    }
}

fraction add(fraction a, fraction b) {
    fraction resultado = { 0 , 0 };
    int maximo_divisor;
    if (a == 0 || b == 0) { //caso um dos elementos seja 0
        if (a == 0) { //caso do ser o A 
            resultado = b;
            return resultado;
        }
        else { //caso de ser o B
            resultado = a;
            return resultado;
        }
    }
    if (a.den == b.den) { //quando já têm denominador em comum
        resultado.num = a.num + b.num;
    }
    if (a.den != b.den) { //caso de não terem denominador comum
        a.num *= b.den; //multiplicar o numerador pelo denominador oposto
        b.num *= a.den;
        a.den = a.den * b.den; //atualizar o denominador pela multiplicação de ambos
        b.den = a.den * b.den;
        resultado.num = a.num + b. num;
        resultado.den = a.den
    }
    maximo_divisor = algoritmo_de_euclides(resultado.num, resultado.den); //reduçao para a forma irreduzivel
    resultado.num /= maximo_divisor; //atualização de valores
    resultado.den /= maximo_divisor;
    return resultado;
}

fraction mul(fraction a, fraction b) {
    fraction resultado = { 0 , 0 };
    int maximo_divisor;
    if (a == 0 || b == 0) { //caso um dos elementos seja 0
        return resultado;
    }
    resultado.num = a.num * b.num;
    resultado.den = a.den * b.den;
    maximo_divisor = algoritmo_de_euclides(resultado.num, resultado.den); //reduçao para a forma irreduzivel
    resultado.num /= maximo_divisor; //atualização de valores
    resultado.den /= maximo_divisor;
    return resultado;
}

int main() {
    fraction a { 0, 1 }, b { 2, 1};
    cout << add(a,b) << ' ' << mul(a,b) << '\n';
    fraction a { 1, 1 }, b { -1, 2};
    cout << add(a,b) << ' ' << mul(a,b) << '\n';
    fraction a { -3, 2 }, b { 3, 2 };
    cout << add(a,b) << ' ' << mul(a,b) << '\n';
    fraction a { -3, 2 }, b { -2, 3 };
    cout << add(a,b) << ' ' << mul(a,b) << '\n';
    fraction a { -7, 24 }, b { 1, 3 };
    cout << add(a,b) << ' ' << mul(a,b) << '\n';
    fraction a { -8, 25 }, b { 3, 4 };
    cout << add(a,b) << ' ' << mul(a,b) << '\n';
    return 0;
}